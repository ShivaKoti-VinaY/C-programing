#include<stdio.h>

int calcpercentage(int sci,int math, int soc);

int main(){
    int sci = 98;
    int math =100;
    int soc = 97;

    printf("percentage is %d", calcpercentage(sci,math,soc));
    return 0;
}
int calcpercentage(int sci,int math, int soc){
    return((sci+math+soc)/3);
}
