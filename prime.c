#include<stdio.h>

int main(){
  int n,i,count=0;

  printf("Enter the n value:");
  scanf("%d",&n);

  for (int i = 1; i <=n; i++)
  {
    if(n%i==0)
    {
      count++;
    }
  }
  if(count==2)
  printf("The given number is prime number:\n");

  else
  printf("the given number is not a prime number\n");

  return 0;
  
}