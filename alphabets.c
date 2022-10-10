#include<stdio.h>
int main()
{
    char ch;
    printf("enter Characters:");
    scanf("%c",&ch);

    if (ch >= 'A' && ch<= 'Z'){
        printf("Upper case\n");
    }
    else if(ch >= 'a'  && ch<= 'z')
    {
        printf("Lower case\n");
    }
    else{
        printf("invalid character\n");
    }
}