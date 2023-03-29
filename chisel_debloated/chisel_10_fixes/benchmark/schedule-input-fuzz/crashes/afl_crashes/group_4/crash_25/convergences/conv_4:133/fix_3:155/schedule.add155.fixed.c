/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker
{
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[(15UL * sizeof(int) - 4UL * sizeof(void *)) - sizeof(size_t)];
};
struct _job
{
  struct _job *next;
  struct _job *prev;
  int val;
  short priority;
};
typedef struct _job Ele;
struct list
{
  Ele *first;
  Ele *last;
  int mem_count;
};
typedef struct list List;
#pragma merger("0", "/tmp/cil-CCtPIRzp.i", "")
#pragma merger("0", "/tmp/cil-8u09MzPP.i", "")
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format, ...);
extern int fscanf(FILE *__restrict __stream, char const *__restrict __format, ...) __asm__("__isoc99_fscanf");
extern int malloc();
Ele *new_ele(int new_num)
{
  Ele *ele;
  int tmp;

  {
    {
      tmp = malloc(sizeof(Ele));
      ele = (Ele *)tmp;


      ele->val = new_num;
    }
    return (ele);
  }
}
List *new_list(void)
{
  List *list;
  int tmp;

  {
    {
      tmp = malloc(sizeof(List));
      list = (List *)tmp;



    }
    return (list);
  }
}
List *append_ele(List *a_list, Ele *a_ele)
{


  if (!a_list)
  {

    a_list = new_list();

  }
  a_ele->prev = a_list->last;
  if (a_list->last)
  {
    (a_list->last)->next = a_ele;
  }
  else
  {
    a_list->first = a_ele;
  }
  a_list->last = a_ele;
  a_ele->next = (struct _job *)0;
  (a_list->mem_count)++;
  return (a_list);



}
Ele *find_nth(List *f_list, int n)
{
  Ele *f_ele;
  int i;

  {




    f_ele = f_list->first;
    i = 1;
    {
      while (1)
      {
        ;

        {
          if (!(i < n))
          {
            goto while_break;
          }
        }


          goto while_break;





        f_ele = f_ele->next;
        i++;
      }
    while_break: /* CIL Label */;
    }
    return (f_ele);
  }
}
List *del_ele(List *d_list, Ele *d_ele)
{













  if (d_ele->next)
  {
    (d_ele->next)->prev = d_ele->prev;
  }
  else
  {
    d_list->last = d_ele->prev;
  }
  if (d_ele->prev)
  {
    (d_ele->prev)->next = d_ele->next;
  }
  else
  {
    d_list->first = d_ele->next;
  }
  (d_list->mem_count)--;
  return (d_list);













}
extern int free();










int alloc_proc_num;
int num_processes;
Ele *cur_proc;
List *prio_queue[4];
List *block_queue;
void schedule(void);
void finish_process(void)
{

  {

    schedule();
  }
  if (cur_proc)
  {

    fprintf((FILE *__restrict)stdout, (char const *__restrict)"%d ", cur_proc->val);






  }
}
void finish_all_processes(void)
{
  int i;
  int total;

  {
    total = num_processes;
    i = 0;
    {
      while (1)
      {
        ;
        if (!(i < total))
        {
          goto while_break;
        }
        {
          finish_process();
          i++;
        }
      }
    while_break: /* CIL Label */;
    }

  }
}
void schedule(void)
{
  int i;

  {
    cur_proc = (Ele *)0;
    i = 3;
    {
      while (1)
      {
        ;
        if (!(i > 0))
        {
          goto while_break;
        }
        if ((prio_queue[i])->mem_count > 0)
        {
          {
            cur_proc = (prio_queue[i])->first;
            prio_queue[i] = del_ele(prio_queue[i], cur_proc);
          }
          return;
        }
        i--;
      }
    while_break: /* CIL Label */;
    }

  }
}
void upgrade_process_prio(int prio, float ratio)
{
  int count;
  int n;
  Ele *proc;
  List *src_queue;
  List *dest_queue;

  {




    src_queue = prio_queue[prio];
    dest_queue = prio_queue[prio + 1];
    count = src_queue->mem_count;

    {
      {
        n = (int)((float)count * ratio + (float)1);
        proc = find_nth(src_queue, n);
      }
      if (proc)
      {

        src_queue = del_ele(src_queue, proc);

        dest_queue = append_ele(dest_queue, proc);
      }
    }






  }
}
void unblock_process(float ratio)
{
  int count;
  int n;
  Ele *proc;
  int prio;

  {
    if (block_queue)
    {
      {
        count = block_queue->mem_count;
        n = (int)((float)count * ratio + (float)1);
        proc = find_nth(block_queue, n);
      }
      if (proc)
      {

        block_queue = del_ele(block_queue, proc);
        prio = (int)proc->priority;
        prio_queue[prio] = append_ele(prio_queue[prio], proc);
      }
    }


  }
}
void quantum_expire(void)
{
  int prio;

  {
    {
      schedule();
    }
    if (cur_proc)
    {

      prio = (int)cur_proc->priority;
      prio_queue[prio] = append_ele(prio_queue[prio], cur_proc);
    }


  }
}
void block_process(void)
{

  {

    schedule();
  }
  if (cur_proc)
  {

    block_queue = append_ele(block_queue, cur_proc);




  }
}
Ele *new_process(int prio)
{
  Ele *proc;
  int tmp;

  {
    {
      tmp = alloc_proc_num;
      alloc_proc_num++;
      proc = new_ele(tmp);
      proc->priority = (short)prio;
      num_processes++;
    }
    return (proc);
  }
}
void add_process(int prio)
{
  Ele *proc;

  {

    proc = new_process(prio);
    prio_queue[prio] = append_ele(prio_queue[prio], proc);


  }
}
void init_prio_queue(int prio, int num_proc)
{
  List *queue;
  Ele *proc;
  int i;

  {
    {
      queue = new_list();
      i = 0;
    }
    {
      while (1)
      {
        ;
        if (!(i < num_proc))
        {
          goto while_break;
        }
        {
          proc = new_process(prio);
          queue = append_ele(queue, proc);
          i++;
        }
      }
    while_break: /* CIL Label */;
    }
    prio_queue[prio] = queue;

  }
}










extern int atoi();
void main(int argc, char **argv)
{
  int command;
  int prio;
  float ratio;
  int status;
  int tmp;

  {
    if (argc < 4)
    {
      {
        fprintf((FILE *__restrict)stdout, (char const *__restrict)"incorrect usage\n");
      }
      return;
    }
    {

      prio = 3;
    }
    {
      while (1)
      {
        ;
        if (!(prio >= 1))
        {
          goto while_break;
        }
        {
          tmp = atoi(*(argv + prio));
          init_prio_queue(prio, tmp);
          prio--;
        }
      }
    while_break: /* CIL Label */;
    }



    {
      while (1)
      {
        ;
        if (status != -1)
        {




        }
        else
        {
          goto while_break___0;
        }
        {
          if (command == 6)
          {
            goto case_6;
          }
          if (command == 3)
          {
            goto case_3;
          }
          if (command == 5)
          {
            goto case_5;
          }
          if (command == 4)
          {
            goto case_4;
          }
          if (command == 2)
          {
            goto case_2;
          }
          if (command == 1)
          {
            goto case_1;
          }
          if (command == 7)
          {
            goto case_7;
          }
          goto switch_break;
        case_6: /* CIL Label */
        {
          finish_process();
        }
          goto switch_break;
        case_3: /* CIL Label */
        {
          block_process();
        }
          goto switch_break;
        case_5: /* CIL Label */
        {
          quantum_expire();
        }
          goto switch_break;
        case_4: /* CIL Label */
        {
          fscanf((FILE *__restrict)stdin, (char const *__restrict)"%f", &ratio);
          unblock_process(ratio);
        }
          goto switch_break;
        case_2: /* CIL Label */
        {
          fscanf((FILE *__restrict)stdin, (char const *__restrict)"%d", &prio);
          fscanf((FILE *__restrict)stdin, (char const *__restrict)"%f", &ratio);
        }

          {

















            upgrade_process_prio(prio, ratio);


          }
          goto switch_break;
        case_1: /* CIL Label */
        {
          fscanf((FILE *__restrict)stdin, (char const *__restrict)"%d", &prio);
        }

          {

















            add_process(prio);


          }
          goto switch_break;
        case_7: /* CIL Label */
        {
          finish_all_processes();
        }

        switch_break: /* CIL Label */;
        }
        {
          status = fscanf((FILE *__restrict)stdin, (char const *__restrict)"%d", &command);
        }
      }
    while_break___0: /* CIL Label */;
    }

  }
}










































