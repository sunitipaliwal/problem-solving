#include<stdio.h>
int main(){
    int arr[10];
    int i, n,target,pos;
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
for(i=0;i<n;i++){
   if(arr[i]==target){
    pos=i;
    printf("element is found at %d",pos);
    break;
   }
   
}

    printf("unsuccessful search");
   
return 0;
}