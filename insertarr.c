#include<stdio.h>
int main(){
    int arr[5],n;
    int i,j,loc,element;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++){
        
            printf("element no.",i+1);
            scanf("%d",&arr[i]);
        
    }
    //inserting process
    
            printf("the element value that is to be inserted:");
            scanf("%d",&element);
            printf("the location at which the array to be inserted:");
            scanf("%d",&loc);
         for(i=loc;i<n;i++){
            arr[loc+1]=arr[loc];

         }
         arr[loc]=element;
          printf("the array after insertion is:\n");
         for(i=0;i<=n;i++){
           
            printf("%d\n",arr[i]);
         }
         return 0;
        }
    

