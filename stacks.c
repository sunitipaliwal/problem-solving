#include<stdio.h>
int stack[100],choice=0,i,j,n,top=-1;
void push();
void pop();
void show();
void main(){

printf("enter the size of stack\n");
scanf("%d,&n");
printf("****STACKS USING OPERATIONS****");
printf("\n--------------\n");
while(choice!=4){
    printf("chose one from the below options...\n ");
    printf("\n1.Push\n2.pop\n3.Show\n4.Exit");
    printf("\n Enter your choice \n");
    scanf("%d",&choice);
    switch(choice){
   case 1:{
    push();
    break;
   }
   case 2:{
    pop();
    break;
   }
   case 3:{
    show();
    break;
   }
   case 4:{
    printf("Exiting......");
    break;
   }
   default:{
   printf("\nplease enter the valid choice");
    }
}

}
}
void push(){
    int 
}