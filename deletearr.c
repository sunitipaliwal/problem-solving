
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
    
            printf("the location value that is to be deleted:");
            scanf("%d",&loc);
            
         for(i=loc;i<n-1;i++){
            arr[i]=arr[i+1];

         }
         
          printf("the array after deletion is:\n");
         for(i=0;i<=n-2;i++){
           
            printf("%d\n",arr[i]);
         }
         return 0;
        }
    

