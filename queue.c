#include <stdio.h>
#include <stdlib.h>
#define maxsize 50
int queue[maxsize];
int front=-1;
int rear=-1;
int item;

int isempty(queue)
{
    if (front==-1)
        return 1;
    else
        return 0;    
}
int isfull(queue)
{
    if ((rear+1)%maxsize==front)
       {return 1;}
    else   
       { return 0;  }  
}
int enqueue(item)
{
    if (isfull()){
        printf("queue is full");
        exit(1);}
    if (front==-1 && rear==-1)
       { front=rear=0;
        }
    else 
        rear=(rear+1)%maxsize;
        queue[rear]=item;  
}
int dequeue()
{
    if (isempty()){
         printf("queue is empty");
        exit(1);
        }
    item=queue[front];    
    if (front==rear){ 
        front=rear=-1;}
    else
        front=(front+1)%maxsize;
 return item;
 }       

int display()
{
    if (isempty()){
        printf("queue is empty");
        exit(1);}
    else{
        return queue[front];  }  
}
int main()
{
    int choice,c;
    int x,y,z;
    do{
    printf("Enter your choice\n 1.enqueue\n 2.dequeue\n 3.display\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("enter  the no. to enqueue=");
            scanf("%d",&x);
            enqueue(x);
            break;
            
        case 2:
            y=dequeue();
            printf("removed element=%d \n",y);
            break;
            
        case 3:
            z=display();
            printf("top element=%d \n",z);
            break;
            
        default :
            printf("invalide choice\n");
    }
    printf("do you want to continue 1/0 = ");
    scanf("%d",&c);
    }while (c==1);
    return 0;
}