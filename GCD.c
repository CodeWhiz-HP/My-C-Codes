#include<stdio.h>
int gcd(int a,int b)
{
    int i;
    if(a<b){
        for(i=a;i>=1;i--){
            if(a%i==0 && b%i==0) return i;
        }
    }
    if(b<a){
        for(i=b;i>=1;i--){
            if(a%i==0 && b%i==0) return i;
        }
    }
}
int main()
{
    int num1,num2;
    printf("Enter 1st Number:");
    scanf("%d",&num1);
    printf("Enter 2nd Number:");
    scanf("%d",&num2);
    printf("The GCD of the two numbers is:%d",gcd(num1,num2));

    
 return 0;   
}