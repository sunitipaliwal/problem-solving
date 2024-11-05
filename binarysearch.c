#include<stdio.h>
int main(){
    int arr[10];
    int i, n,target,pos,start,mid,end;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
    printf("element no.",i+1);
    scanf("%d",&arr[i]);
    }
//searching process
printf("enter the target element");
scanf("%d",&target);
start=0;
end=n-1;
int flag=0;

  while(start<=end){
    mid=(start+end)/2;
    if(arr[mid]>target)
        end=mid-1;
     if(arr[mid]<target)
        start=mid+1;
        if(arr[mid]==target){
            flag=1;
         printf("element is found at %d",mid+1);
         break;
        }
    }
    if(flag==0)
    printf("unsuccessful search");
   
return 0;
}