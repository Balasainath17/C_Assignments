// 1. Write a program to find the Nth term of the Fibonnaci series.
/*
#include<stdio.h>
int main()
{
    int i,n,prev=0,cur=1,next=0;
        printf("enter a number\n");
        scanf("%d",&n);
        //  printf("%d %d ",prev,cur);
        for(i=1;i<n-1;i++)
        {
            next=prev+cur;
            prev=cur;
            cur=next;
        }
                 printf("%d ",next);
    return 0;
}
*/

// 2. Write a program to print first N terms of Fibonacci series
/*
#include<stdio.h>
int main()
{
    int i,n,prev=0,cur=1,next;
        printf("enter a number\n");
        scanf("%d",&n);
          printf("%d %d ",prev,cur);
        for(i=2;i<n-1;i++)
        {
            next=prev+cur;
                printf("%d\t",next);
            prev=cur;
            cur=next;
        }
    return 0;
}
*/

// 3. Write a program to check whether a given number is there in the Fibonacci series or not.
/*
#include<stdio.h>
int main()
{
    int i,n,prev=0,cur=1,next=0;
        printf("enter a number\n");
        scanf("%d",&n);
     
        for(i=1;1;i++)
        {
            next=prev+cur;
            prev=cur;
            cur=next;
            if(next==n)
            {
                printf("Number found");
                break;
            }    
            else if(next>n)
            {
                 printf("Number does not belong to fibonacci series");
                 break;
            }
        }
    return 0;
}
*/


// 4. Write a program to calculate HCF of two numbers
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

// #include<stdio.h>
// int main()
// {
//     int x,y,hcf=1;
//     printf("enter two numbers\t");
//     scanf("%d%d",&x,&y);
//     int i;
//     int min=x<y?x:y;
//     for(i=1;i<=min;i++)
//     {
//         if(x%i==0&&y%i==0)
//             hcf=i;
//     }

//     printf("HCF is %d",hcf);
//     return 0;
// }

// 5. Write a program to check whether two given numbers are co-prime numbers or not.
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
    if(i==x*y)
        printf("Numbers are co prime");
    else
    {
        printf("Numbers are not co prime");
    }
    return 0;
}
*/


// #include<stdio.h>
// int main()
// {
//     int x,y,hcf=1;
//     printf("enter two numbers\t");
//     scanf("%d%d",&x,&y);
//     int i;
//     int min=x<y?x:y;
//     for(i=1;i<=min;i++)
//     {
//         if(x%i==0&&y%i==0)
//             hcf=i;
//     }
//             if(hcf==1)
//                 printf("Numbers are co prime");
//             else
//             {
//                 printf("Numbers are not co prime");
//             }
 
//     return 0;
// }

//  6. Write a program to print all Prime numbers under 100
/*
#include<stdio.h>
int main()
{
   int i,n,flag=0;
   for(n=2;n<=100;n++)
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
   return 0;
}
*/

// 7. Write a program to print all Prime numbers between two given numbers
/*
#include<stdio.h>
int main()
{
   int i,n,flag=0;
   int a,b;
    printf("Enter two numbers\t");
    scanf("%d %d",&a,&b);
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
   return 0;
}
*/

// 8. Write a program to find next Prime number of a given number
/*
#include<stdio.h>
int main()
{
   int i,n,flag=0;
   int a;
    printf("Enter a number\t");
    scanf("%d",&a);
   for(n=a;1;n++)
   {
    flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        flag=1;
    }
    if(flag==0)
        {
            printf("%d ",n);
            break;
        }
   }
   return 0;
}
*/

// 9. Write a program to check whether a given number is an Armstrong number or not
/*
#include<stdio.h>
int main()
{
   int n,on,rem,res=0;
   printf("Enter a number");
   scanf("%d",&n);
   on=n;
    while (on!=0)
    {
        rem=on%10;
        res+=rem*rem*rem;
        on/=10;
    }
    if(res==n)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
    
}
*/

// 10. Write a program to print all Armstrong numbers under 1000
/*
#include<stdio.h>
#include<math.h>
int main()
{
     int on,i,rem,res;
   for(i=1;i<=1000;i++)
   {
        on=i;
            res=0;
    while (on>0)
    {
        rem=on%10;
        res+=rem*rem*rem;
        on/=10;
    }
    if(res==i)
    {
        printf("%d\t",i);
    }
   }
    return 0; 
}
*/

