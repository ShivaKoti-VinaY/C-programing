// print the table of a number given by the user
#include<stdio.h>
int main(){

    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
}