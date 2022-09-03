// 1. Write a recursive function to print first N natural numbers
/*
#include<stdio.h>
void printN(int);
void main()
{
    printN(100);
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

// 2. Write a recursive function to print first N natural numbers in reverse order
/*
#include<stdio.h>
void printN(int);
void main()
{
    printN(100);
}
void printN(int n)
{
    if(n>0)
    {
        printf("%d ",n);
          printN(n-1);
    }
}
*/

// 3. Write a recursive function to print first N odd natural numbers
/*
#include<stdio.h>
void oddN(int);
void main()
{
    oddN(10);
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

// 4. Write a recursive function to print first N odd natural numbers in reverse order
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
        printf("%d ",2*n-1);
             oddN(n-1);
    }
}
*/

// 5. Write a recursive function to print first N even natural numbers
/*
#include<stdio.h>
void evenN(int);
void main()
{
    evenN(20);
}
void evenN(int n)
{
    if(n>0)
    {
        evenN(n-1);
        printf("%d ",2*n);
    }
}
*/

// 6. Write a recursive function to print first N even natural numbers in reverse order
/*
#include<stdio.h>
void evenN(int);
void main()
{
    evenN(20);
}
void evenN(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        evenN(n-1);
    }
}
*/

// 7. Write a recursive function to print squares of first N natural numbers
/*
#include<stdio.h>
void sqr(int);
void main()
{
   sqr(5);
}
void sqr(int n)
{
    if(n>0)
    {
        sqr(n-1);
        printf("%d ",n*n);
    }
}
*/

// 8. Write a recursive function to print binary of a given decimal number
/*
#include<stdio.h>
void bin(int);
int main()
{
    bin(16);
}
void bin(int n)
{
    if(n==0)
    {
        return;
    }
    bin(n>>1);
     printf("%d",n&1);
}
*/

// #include<stdio.h>
// void bin(int);
// int main()
// {
//     bin(23);
// }
// void bin(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     bin(n/2);
//      printf("%d",n%2);
// }

// 9. Write a recursive function to print octal of a given decimal number
/*
#include<stdio.h>
void oct(int);
int main()
{
    oct(47);
}
void oct(int n)
{
    if(n==0)
    {
        return;
    }
    oct(n/8);
     printf("%d",n%8);
}
*/

// 10. Write a recursive function to print reverse of a given number
/*
#include<stdio.h>
void rev(int);
int rem;
int main()
{
    rev(86000);
}

void rev(int n)
{
    if(n==0)
    {
         return;
    }
    rem=n%10;
    n/=10;
    printf("%d",rem);
    rev(n);
}
*/
