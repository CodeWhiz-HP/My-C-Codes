#include<stdio.h>

int sumArray(int a[],int length)
{    
    int sum=0,j;
    for(j=0;j<length;j++){
        sum=sum + a[j];
    }
    return sum;
    
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
    printf("The sum of all elements is:%d",sumArray(arr,length));

 return 0;   
}
    