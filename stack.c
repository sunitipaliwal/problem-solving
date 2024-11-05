
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 50
int stack[MAXSIZE];
int top=-1;

int isempty()
{
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}
int isfull(){
    if(top==MAXSIZE-1){
        return 1;
    }else{
        return 0;
    }
}
void push (int data)
{
    if(isfull()){
        printf("stack overflow");
        exit(1);
    }
    top++;
    stack[top]=data;
}
int pop(){
    if(isempty()){
        printf("stack underflow");
        exit(1);
    }
    int x=stack[top];
    top--;
    return x;

}
int peek(){
    if(top==-1){
        printf("stack underflow");
        exit(1);
    }
    return stack[top];

}
int main(){
     int choice,x,y,z,c;
     do{
     printf("enter your choice\n 1.push \n 2.pop \n 3.peek \n");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
          printf("enter the no. to push= ");
          scanf("%d",&x);
          push(x);
          break;
          case 2:
          y=pop();
          printf("pooped element=%d\n",y);
          break;
          case 3:
          z=peek();
          printf("top element=%d\n",z);
          break;

          default :
          printf("invalid choice\n");

     }
     printf("do you want to continue press 1/0");
     
     scanf("%d",&c);
     }while(c==1);
     return 0;

}