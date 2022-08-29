// 1. Write a function to calculate the area of a circle. (TSRS)
/*
#include<stdio.h>
float area(int);
int main()
{
    printf("Area of circle is %0.1f",area(5));
}
float area(int x)
{
    return (3.14*x*x);
}
*/

// 2. Write a function to calculate simple interest. (TSRS)
/*
#include<stdio.h>
int simple(int,int,int);
int main()
{
    printf("Rate of interest is %d",simple(2000,5,2));
}
int simple(int p,int r,int t)
{
    return (p*r*t/100);
}
*/

/* 3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS) */
/*
#include<stdio.h>
int func(int);
int main()
{
    printf("number is even ");
}
int func(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
*/
// 4. Write a function to print first N natural numbers (TSRN)
/*
#include<stdio.h>
void printN(int);
void main()
{
    printN(50);
}
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d ",n);
    }
}
*/

// 5. Write a function to print first N odd natural numbers. (TSRN)
/*
#include<stdio.h>
void oddN(int);
void main()
{
    oddN(19);
}
void oddN(int n)
{
    if(n>0)
    {
        oddN(n-1);
        printf("%d ",2*n-1);
    }
}
*/

// 6. Write a function to calculate the factorial of a number. (TSRS)
/*
#include<stdio.h>
int fact(int);
int main()
{
    printf("factorial of 5 is %d",fact(8));
    return 0;
}
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
*/

// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
/*
#include<stdio.h>
int fact(int);
int comb(int,int);
int main()
{
   printf("Combination of 12 items and 3 selected at a time is:%d",comb(12,3));
    return 0;
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
*/

// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
/*
#include<stdio.h>
int fact(int);
int permu(int,int);
int main()
{
   printf("Permutation of 5 items and 3 selected at a time is:%d",permu(5,3));
    return 0;
}
int fact(int x)
{
    if(x==0 || x==1)
        return 1;
    return x*fact(x-1);
}
int permu(int n,int r)
{
        int c=fact(n)/fact(n-r);
        return c;
}
*/

// 9. Write a function to check whether a given number contains a given digit or not (TSRS)
/*
#include<stdio.h>
int digit(int);
int main()
{
    digit(34567);
   
}
int digit(int n)
{
    int rem;
    while(n)
    {
        rem=n%10;
        if(rem==5)
        {
             printf("digit found");
              return 1;
        }
        n=n/10;
    }
    return 0;
}
*/

/* 10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)  */
/*
#include<stdio.h>
void primefact(int);
void main()
{
        primefact(38);
}
void primefact(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d ,",i);
            
        }
    }
}
*/