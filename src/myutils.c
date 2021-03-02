#include <stdio.h>
#include <string.h>
#include "myutils.h"

int factorial(int num)
{
    int i,fact=1;      
    for(i=1;i<=num;i++)
    {    
      fact=fact*i;    
    }    
  return fact;
}

int isPalindrome(int palind)
{
    int r,sum=0,temp;
    temp=palind;
    while(palind>0)
    {
    r=palind%10;
    sum=(sum*10)+r;
    palind=palind/10;
    }
    if(temp==sum)
    return 1; //if it is palindrome
    else
    return 0; //not palindrome;
}


int isPrime(int number)
{
    int i, p = 0;

    for(i=1; i<=number; i++)
    {
       if(number%i==0)
       {
          p++;
       }
    }
    if(p==2)
    {
       return 1;
    }
    else
    {
        return 0;//not a prime number
    }
 }

 int vsum(int arrnum[])
{
  int sum = 0;
  for(int i=0; i<sizeof(arrnum)/sizeof(arrnum[0]); i++)
  {
    sum += arrnum[i];
    return sum;
  }
}