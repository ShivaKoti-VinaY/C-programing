#include<stdio.h>

void calulatePrice(float value);
int main(){
    float value=100.0;
    calulatePrice(value);
    printf("value is %f \n",value);
    return 0;
}
void calulatePrice(float value){
    value=value+(0.18 * value);
    printf("final price is:%f \n",value);
}
