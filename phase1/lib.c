// lib.c, 159

#include "include.h"
#include "types.h"
#include "data.h"

// clear DRAM data block, zero-fill it
void Bzero(char *p, int bytes) 
{   
   int count = 0;
   while(count <= bytes)
   {
     *p = (char)0;
     p++;
     count++;
   }
}

int QisEmpty(q_t *p)  // return 1 if empty, else 0
{
   if(p -> bytes == 0)
   {
     return 1;
   }
   return 0;
}

int QisFull(q_t *p) 
{ // return 1 if full, else 0
  if(p->bytes == Q_SIZE)
  {
    return 1;
  }
  return 0;
}

// dequeue, 1st integer in queue
// if queue empty, return -1
int DeQ(q_t *p) 
{ // return -1 if q[] is empty
   int i;
   int next;

   if(QisEmpty(p))
   {
      return -1;
   }

   next = p->q[0]; // copy first in queue to be returned later
   p->bytes;
   bytes--;
   for(i = 0; i<p->bytes; i++) //decrease size of queue
   {
     p->q[i]=p->q[i+1]; // shift all by 1
   }
   return next;
}

// if not full, enqueue integer to tail slot in queue
void EnQ(int to_add, q_t *p) 
{
   if(QisFull(p)) 
   {
      cons_printf("Kernel panic: queue is full, cannot EnQ!\n");
      return
   }

   p.q[size] = to_add; //add int to next queue slot
   size++;
   return;
}
