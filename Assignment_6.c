// 1. Write a program to calculate sum of first N natural numbers
/*
#include<stdio.h>
int main()
{
    int n,s=0;
    printf("enter the value\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+i;  
    }
    printf("%d",s);
    return 0;
}
*/

// 2. Write a program to calculate sum of first N even natural numbers
/*
#include<stdio.h>
int main()
{
    int n,s=0;
    printf("enter the value\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+i*2;  
    }
    printf("%d",s);
    return 0;
}
*/

// 3. Write a program to calculate sum of first N odd natural numbers
/*
#include<stdio.h>
int main()
{
    int n,s=0;
    printf("enter the value\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+(2*i-1);  
    }
    printf("%d",s);
    return 0;
}
*/

// 4. Write a program to calculate sum of squares of first N natural numbers
/*
#include<stdio.h>
int main()
{
    int n,s=0;
    printf("enter the value\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+i*i;  
    }
    printf("%d",s);
    return 0;
}
*/

// 5. Write a program to calculate sum of cubes of first N natural numbers
/*
#include<stdio.h>
int main()
{
    int n,s=0;
    printf("enter the value\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+i*i*i;  
    }
    printf("%d",s);
    return 0;
}
*/

// 6. Write a program to calculate factorial of a number
/*
#include<stdio.h>
int main()
{
    int n,s=1;
    printf("enter the value\t");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        s=s*i;  
    }
    printf("%d",s);
    return 0;
}
*/

// 7. Write a program to count digits in a given number
/*
#include<stdio.h>
int main()
{
      int x,count=0;
    printf("enter the value\t");
    scanf("%d",&x);
    while (x!=0)
    {
       x=x/10; 
       count++;
    }
    printf("%d",count);
    
   return 0;
}
*/

// 8. Write a program to check whether a given number is a Prime number or not
/*
#include<stdio.h>
int main()
{
    int x,flag=0;
    printf("enter the value\n");
    scanf("%d",&x);
    for(int i=2;i<x/2;i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
            printf("It's not a prime number");
        
    }
    else
    {
        printf("it's a prime");
    }
    return 0;
}
*/

// 9. Write a program to calculate LCM of two numbers
/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two numbers\t");
    scanf("%d%d",&x,&y);
    int i;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0&&i%y==0)
            break;
    }
    printf("LCM is %d",i);
    return 0;
}
*/


// HCF program
/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two numbers\t");
    scanf("%d%d",&x,&y);
    int i,a;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0&&i%y==0)
            break;
    }
    a=x*y;
    printf("HCF is %d",a/i);
    return 0;
}
*/

// 10. Write a program to reverse a given number
/*
#include<stdio.h>
int main()
{
    int n,rem,reverse=0;
        printf("Enter the value ");
        scanf("%d",&n);
            while (n!=0)
            {
                rem=n%10;
                n=n/10;
                reverse=reverse*10+rem;
            }
        printf("Reverse of a number is  %d",reverse);
    return 0;
            
}
*/