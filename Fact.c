#include<stdio.h>
int fact(int n){
    int result;
    if(n==0 || n==1) result=1;
    else result=n*fact(n-1);
    return result;
}
int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    printf("%d! = %d",num,fact(num));

 return 0;   
}