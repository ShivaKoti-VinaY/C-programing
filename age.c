#include<stdio.h>
int main(){
    int age;
    printf("enter age:");
    scanf("%d",&age);

    if(age > 18 && age < 50){
        printf("peddamanushulu\n");
    }
    else if(age > 13 && age < 18)
    {
        printf("howla gallu\n");
        
    }
    else if(age > 60) {
        printf("mussal na moddal\n");

    }
    else{
        printf("bachha porolu\n");

    }
     
return 0;
}