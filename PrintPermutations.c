#include<stdio.h>
#include<string.h>
void printPermutations(char str[],int length);
void swap(char *x,char *y);

int main()
{
    int length;
    char string[length];
    printf("Enter Your String:");
    scanf("%s",&string);
    length=strlen(string);
    printf("All Possible Permutations are:\n");
    printPermutations(string,length);

  return 0;  
}

void printPermutations(char str[],int length)
{
    int i,j;
    static int start=0;
    if(start==length-1)
        {
            printf("%s\n",str);
        }
    
    for(i=start;i<length;i++)
        {
          swap(&str[start],&str[i]);
          start++;
          printPermutations(str,length);
          start--;
          swap(&str[start],&str[i]);
        }
}
void swap(char *x,char *y)
{
    char temp;
    temp=*y;
    *y=*x;
    *x=temp;
}