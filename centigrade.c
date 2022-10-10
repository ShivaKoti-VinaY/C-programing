#include<stdio.h>

int main()
{
float c,f;
printf("\n Enter the temperature in Celcius: ");
scanf("%f",&c);

f=((9*c)/5)+32;

printf("\n The temperature in Fahrenheit Scale: %.2f degree Fahrenheit",f);

return 0;
}