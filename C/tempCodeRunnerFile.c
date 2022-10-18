#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct queue *q,int size)
{
  q->size=size;
  q->front=0;
  q->rear=0;
  q->Q=(int*)malloc(sizeof(int)*q->size);
  
}

void enqueue(struct queue *q,int data)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=data;
    }

}

int dequeue(struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        printf("Queue is empty\n");
    }
    else{
        q->front=(q->front+1)%q->size;
         x=q->Q[q->front];
    }
    return x;
}

void Display(struct queue q)
{
    int x=q.front+1;
  do
    {
        printf("%d ",q.Q[x]);
        x=(x+1)%q.size;
    }  while(x!=(q.rear+1)%q.size);
    printf("\n");
}
int main()
{
    struct queue q;
    printf("Enter the size: ");
    scanf("%d",&q.size);
    create(&q,q.size);
    for(int i=0;i<q.size;i++)
    {
        int x;
        scanf("%d",&x);
        enqueue(&q,x);
    }
    Display(q);
    printf("%d ",dequeue(&q));
    
    return 0;
    
}