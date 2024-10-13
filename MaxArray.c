#include<stdio.h>
int maxArray(int a[],int length)
{
    int max=a[0];
    for(int i=1;i<length;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}
int main()
{
    int length,i,arr[length];
    printf("Enter the Array Length:");
    scanf("%d",&length);
    printf("Enter the Array:\n");
    for(i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Maximum of Array is: %d",maxArray(arr,length));
    
  return 0;  
}