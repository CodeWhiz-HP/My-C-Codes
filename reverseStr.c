#include<stdio.h>
int stringLength(char str[])
{
    int i=0,length=1;
    while(str[i]!='\0'){
         length++;
         i++;
         }
    return length;
}
void reverseStr(char str[])
{
    char temp;
    int length=stringLength(str);
    if(length%2!=0){
        for(int i=0;i<(length-1)/2;i++){
            temp= str[i];
            str[i]=str[length-2-i];
            str[length-2-i]=temp;
        }
    }    
    else for(int i=0;i<length/2;i++){
            temp= str[i];
            str[i]=str[length-2-i];
            str[length-2-i]=temp;
         }
  return;  
}

int main()
{
    int length;
    char string[length];
    printf("Enter a String:");
    scanf("%s",&string[length]);
    reverseStr(string);
    printf("Reversed String is: %s",string);

    
 return 0;   
}