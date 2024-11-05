
#include<stdio.h>
int main(){
    int arr[10];
    int i,j ,n,temp,pos;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
    printf("element no.",i+1);
    scanf("%d",&arr[i]);
    }
    //sorting process
    for(i=0;i<n;i++){
        int min=i;
        for(j=i+1;j<n;j++){
          if(arr[j]<arr[min])  {
            min =j;
        }
    }
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    }
    printf("the array after sorting is:\n");
    for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
    }
    return 0;
}