#include<stdio.h>
int main(){
    int arr[10];
    int i,j ,n,temp,pos;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
  
    scanf("%d",&arr[i]);
    }
    //sorting process
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
          if(arr[j]>arr[j+1])  {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
        }
    }
    printf("the array after sorting is:\n");
    for(i=0;i<n;i++){
    printf("%d",arr[i]);
    }
    return 0;
}