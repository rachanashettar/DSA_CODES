#include<stdio.h>
#include<stdlib.h>
#define QSIZE 5
struct process
{
    int data;
};
struct queue
{
    struct process Q[QSIZE];
    int front,rear;
};
void readdata(struct process *p)
{
    printf("enter the data:\n");
    scanf("%d",&p->data);
}
void displaydata(struct process p)
{
    printf("data= %d\n",p.data);
}
int full(struct queue q)
{
    if(q.rear==(QSIZE-1))
    return 1;
    else
    return 0;
}
int empty(struct queue q)
{
    if(q.front>q.rear)
    return 1;
    else
    return 0;
}
void insert(struct queue *q,struct process data)
{
    q->rear=q->rear+1;
    q->Q[q->rear]=data;
}
struct process delete(struct queue *q)
{
    struct process data;
    data=q->Q[q->front];
    q->front=q->front+1;
    return data;
}
int main()
{
    struct queue q;
    struct process data;
    int ch;
    q.front=0;
    q.rear=-1;
    do
    {
        printf("1-insert  2-delete  3-display  4-exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: if(full(q))
                    printf("queue full\n");
                    else
                    {
                        readdata(&data);
                        insert(&q,data);
                    }
                    break;
            case 2: if(empty(q))
                    printf("queue empty\n");
                    else
                    {
                        data=delete(&q);
                        displaydata(data);
                    }
                    break;
            case 3: display(&q);
                    break;
            case 4: break;
        }
    }while(ch!=4);
}
void display(struct queue q)
{
    int i;
    if(empty(q))
    printf("queue elements: empty\n");
    else
    {
        printf("queue elements are:\n");
        for(i=q.front;i<=q.rear;i++)
        displaydata(q.Q[i]);
    }
}
