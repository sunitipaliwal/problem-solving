#include<stdio.h>
int main()
{
   int arr[10];
    int i,j ,n,temp,pos;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
  
    scanf("%d",&arr[i]);
    }
    //sorting process
    for(i=0;i<n;i++){
      int picked=arr[i];
     j=i-1;
     while(j>=0&&arr[j]>picked){
        arr[j+1]=arr[j];
        j--;
     }
     arr[j+1]=picked;
    }
     printf("the array after sorting is:\n");
    for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
    }
    return 0;
}

