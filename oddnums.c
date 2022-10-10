//taking numbers from user until user enters odd numbers//
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%2!=0) {// if(n % 7==0){ //multiple of 7
            break;
        }
    }while(1);
    printf("This number is multiple by 7:\n");
}