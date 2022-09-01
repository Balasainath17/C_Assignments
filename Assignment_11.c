// 1. Write a function to calculate LCM of two numbers. (TSRS)
/*
#include<stdio.h>
int LCM(int,int);
int main()
{
   printf("LCM is:%d",LCM(7,9));
}
int LCM(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
            break;
    }
    return i;
}
*/

// 2. Write a function to calculate HCF of two numbers. (TSRS)
/*
#include<stdio.h>
int HCF(int,int);
int main()
{
   printf("HCF is:%d",HCF(3,9));
}
int HCF(int x,int y)
{
    int i,hcf=1,min=x<y?x:y;
    for(i=1;i<=min;i++)
    {
        if(x%i==0 && y%i==0)
            hcf=i;
    }
    return hcf;
}
*/

// 3. Write a function to check whether a given number is Prime or not. (TSRS)
/*
#include<stdio.h>
int prime(int);
int main()
{
        prime(8);
       
}
int prime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
      printf("Its a prime");
    }
    else
        return 0;
}
*/

// 4. Write a function to find the next prime number of a given number. (TSRS)
/*
#include<stdio.h>
int prime(int);
int main()
{
    int n=19;
    n=n+1;
    printf("Next prime number is %d",prime(n));    
}
int prime(int a)
{
    int i,n,flag=0;
    for(n=a;1;n++)
   {
    flag=0;
    for(i=2;i<=a/2;i++)
    {
        if(n%i==0)
        flag=1;
    }
    if(flag==0)
        {
          return n;
            break;
        }
   }
   return 0;
}
*/

// 5. Write a function to print first N prime numbers (TSRN)
/*
#include<stdio.h>
void prime(int);
void main()
{
    prime(50);
}
void prime(int a)
{
   int i,n,flag=0;
   for(n=2;n<=a;n++)
   {
    flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        flag=1;
    }
    if(flag==0)
        printf("%d ",n);
   }
}
*/

// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
/*
#include<stdio.h>
void prime(int,int);
void main()
{
    prime(2,23);
}
void prime(int a,int b)
{
   int i,n,flag=0;
   for(n=a;n<=b;n++)
   {
    flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        flag=1;
    }
    if(flag==0)
        printf("%d ",n);
   }
}
*/

// 7. Write a function to print first N terms of Fibonacci series (TSRN)
/*
#include<stdio.h>
void fibo(int);
void main()
{
    fibo(10);
}
void fibo(int n)
{
    int i,prev=0,cur=1,next;
          printf("%d %d ",prev,cur);
        for(i=2;i<n-1;i++)
        {
            next=prev+cur;
                printf("%d ",next);
            prev=cur;
            cur=next;
        }
}
*/

// 8. Write a function to print PASCAL Triangle. (TSRN)
/*
#include<stdio.h>
int fact(int);
int comb(int,int);
void pascal(int);
void main()
{
    pascal(5);
}
int fact(int x)
{
    if(x==0 || x==1)
        return 1;
    return x*fact(x-1);
}
int comb(int n,int r)
{
        int c=fact(n)/(fact(r)*fact(n-r));
        return c;
}
void pascal(int z)
{
    for(int i=0;i<=z;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
}
*/

// 9. Write a program in C to find the square of any number using the function.
/*
#include<stdio.h>
int sqr(int);
int main()
{
    printf("Square of a number is:%d",sqr(5));
}
int sqr(int n)
{
    return n*n;
}
*/

// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
/*
#include<stdio.h>
int fact(int);
int ser(int);
int main()
{
    printf("Sum of the series is:%d",ser(5));
}
int fact(int x)
{
    if(x==0 || x==1)
        return 1;
    return x*fact(x-1);
}
int ser(int n)
{
    int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+fact(i)/i;
        }
        return sum;
}
*/