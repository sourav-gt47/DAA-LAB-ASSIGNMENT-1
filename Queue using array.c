#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void enqueue();
void dequeue();
void peek();
void display();
int queue[MAX];


 struct Queue
{
  //int capacity;
  //int size;
  int rear; //insertion
  int front; //deletion
  //int elements;
}Q;


int main()
{ 
    Q.rear=-1;
    Q.front=-1;
 
int ch;
do{
    printf("\nEnter choice:\n1:enqueue \n2:dequeue  \n3:peek  \n4:display  \n5:Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:enqueue();
                   break;
        case 2:dequeue();
                   break;
        case 3:peek();
                  break;
        case 4:display();
                  break;

        case 5:exit(0); 
    
        default: printf("Invalid Choice");
    }
}while(ch!=0);

return 0;
}



void enqueue()
{   int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(Q.rear==MAX-1)//for full elements
    {
        printf("overflow!!");
    }
    else if(Q.front==-1 && Q.rear==-1)//for first element
    {
        Q.front=Q.rear=0;
        queue[Q.rear]=x;
    }
    else
    {
        Q.rear++;
        queue[Q.rear]=x;
    }
}
void dequeue()
{
    if(Q.front==-1 && Q.rear==-1)
    {
        printf("underflow!!");
    }
    else if(Q.front==Q.rear)
    {
        
         printf("%d ",queue[Q.front]);
          Q.front=Q.rear=-1;

    }
    else
    {
        printf("%d  ",queue[Q.front]);
        Q.front++;
    }
}
void display()
{
    int i;
    if(Q.front==-1 && Q.rear==-1)
    {
        printf("underflow\n");
    }
    else
    {
        for(i=Q.front;i<=Q.rear;i++)
    {
        printf("%d ",queue[i]);
    }
    }
}
void peek()
{
    if(Q.front==-1 && Q.rear==-1)
    {
        printf("underflow\n");
    }
    else
    {
        printf("%d ",queue[Q.front]);
    }
}