#include<stdio.h>
  
  int fib(int n)
  {
  
     if(n<1)
        return n;
     if(n==1)
       return 2;
   return((4*fib(n-1))+fib(n-2));
   
}

int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  
printf("F(n)=%d",fib(n));

return 0;
}
