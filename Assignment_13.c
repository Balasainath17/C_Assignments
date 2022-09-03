// 1. Write a recursive function to calculate sum of first N natural numbers
/*
#include<stdio.h>
int nat(int);
int main()
{
    printf("Sum of the natural numbers is:%d",nat(100));
}
int nat(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n+nat(n-1);
    return s;
*/

// 2. Write a recursive function to calculate sum of first N odd natural numbers
/*
#include<stdio.h>
int oddN(int);
int main()
{
    printf("Sum of the odd natural numbers is:%d",oddN(5));
}
int oddN(int n)
{
    int sum;
    if(n==1)
         return 1;
    sum=2*n-1 + oddN(n-1);
    return sum;
}
*/

// 3. Write a recursive function to calculate sum of first N even natural numbers
/*
#include<stdio.h>
int evenN(int);
int main()
{
    printf("Sum of the even natural numbers is:%d",evenN(33));
}
int evenN(int n)
{
    int sum;
    if(n==0)
         return 0;
    sum=2*n + evenN(n-1);
    return sum;
}
*/

// 4. Write a recursive function to calculate sum of squares of first n natural numbers
/*
#include<stdio.h>
int sqrN(int);
int main()
{
    printf("Sum of the even natural numbers is:%d",sqrN(10));
}
int sqrN(int n)
{
    int sum;
    if(n==0)
         return 0;
    sum=n*n + sqrN(n-1);
    return sum;
}
*/

// 5. Write a recursive function to calculate sum of digits of a given number
/*
#include<stdio.h>
int dig(int);
int main()
{
    printf("sum of the digits is:%d",dig(470));
}
int dig(int n)
{
    
    int sum;
    if(n==0)
         return 0;
    sum=n%10 + dig(n/10);
    return sum;
}
*/

// 6. Write a recursive function to calculate factorial of a given number
/*
#include<stdio.h>
int fact(int);
int main()
{
    printf("factorial of the number is:%d",fact(5));
}
int fact(int x)
{
    if(x==0 || x==1)
        return 1;
    return x*fact(x-1);
}
*/

// 7. Write a recursive function to calculate HCF of two numbers
/*
#include<stdio.h>
int HCF(int,int);
int main()
{
    printf("hcf of given numbers is:%d",HCF(123,246));
}
int HCF(int a,int b)
{
    if(a>b)
    {
        a=a%b;
        if(a%b==0)
            return b;
    }
    else 
    {
        b=b%a;     
        if(b%a==0)
            return a;
    }
    HCF(a,b);
}
*/

// 8. Write a recursive function to print first N terms of Fibonacci series
/*
#include<stdio.h>
int fibo(int);
int main()
{
    int i,n=5;
    for(i=1;i<=n;i++)
        printf("%d ",fibo(i));
    return 0;
}
int fibo(int n)
{
    if(n==0 || n==1)
        return n;
    return fibo(n-1) + fibo(n-2);
}
*/

// 9. Write a program in C to count the digits of a given number using recursion.
/*
#include<stdio.h>
int Ndig(int);
int main()
{
    printf("%d",Ndig(790));
}
int Ndig(int n)
{
    int count=0;
    if(n==0)
        return 0;
    count=1+Ndig(n/10);
    return count;
}
*/

// 10. Write a program in C to calculate the power of any number using recursion.
/*
#include<stdio.h>
int power(int,int);
void main()
{
    printf("Power of the number is:%d",power(4,5));
}
int power(int b,int e)
{
    if(e==0)
        return 1;
    else
        return b*power(b,e-1);
}
*/