//   1. Write a program to check whether a given number is positive or non-positive
/*
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Entered number is positive");
    }
    else
    {
        printf("Entered number is negative");
    }
    return 0;
}
*/

// 2. Write a program to check whether a given number is divisible by 5 or not
/*
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%5==0)
    {
        printf("It's divisible by 5 ");
    }
    else
    {
        printf("It's not divisible by 5 ");
    }
    return 0;
}
*/

/* 3. Write a program to check whether a given number is an even number or an odd
number   */
/*
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("Entered number is even");
    }
    else
    {
        printf("Entered number is odd");
    }
    return 0;
}
*/

/* 4. Write a program to check whether a given number is an even number or an odd
number without using % operator  */
/*
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x&1==1)
    {
        printf("Entered number is odd");
    }
    else
    {
        printf("Entered number is even");
    }
    return 0;
}
*/

// 5. Write a program to check whether a given number is a three-digit number or not
/*
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>99 && x<1000)
    {
        printf("It's a 3 digit number");
    }
    else
    {
        printf("It's not a 3 digit");
    }
    return 0;

}
*/

// 6. Write a program to print greater between two numbers. Print one number of both are the same
/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the numbers\n");
    scanf("%d\t%d",&x,&y);
    if(x>y)
    {
        printf("greater is %d",x);
    }
    else if(y>x)
    {
        printf("greater is %d",y);
    }
    else
    {
        printf("Values are equal i.e %d",x);
    }
    return 0;
}
*/

/* 7. Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots    */
/*
#include<stdio.h>
int main()
{
    int x,a,b,c;
    printf("enter the values of a,b,c");
    scanf("%d  %d  %d",&a,&b,&c);
    x=b*b-4*a*c;
    if(x>0)
    {
        printf("roots are real & distinct");
    }
    else if(x<0)
    {
       printf("roots are imaginary");   
    }
    else
    {
        printf("roots are real & equal");
    }
    return 0;
}
*/

// 8. Write a program to check whether a given year is a leap year or not

/*
#include<stdio.h>
int main()
{
    int x;
     printf("Enter a number: ");
     scanf("%d",&x);
     if(x%100==0)
     {
        if(x%400==0)
        {
            printf("It's a leap year");
        }
        else
        printf("It's not a leap year");
     }
     else if(x%4==0)
     {
         printf("It's a leap year");
     }
     else
     {
          printf("It's not a leap year");
     }
     return 0;
}
*/

/*  9. Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times */
/*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values\n ");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a>b ? a>c?a:c : b>c?b:c);
    return 0;
}
*/


/* 10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage   */

/*
#include<stdio.h>
int main()
{
 float cp,sp,x;
     printf("Enter a cp: ");
      scanf("%d",&cp);
      printf("Enter a sp: ");
     scanf("%d",&sp);
        float loss,profit;
        loss=(cp-sp)/cp;
        profit=(sp-cp)/cp;
        if(cp>sp)
        {
            x=loss*100;
        printf("profit is%0.2f percentage",x);
        }
        else if(sp>cp)
        {
             x=profit*100;
        printf("loss is %0.2f percentage",x);
        }
        else
        {
            printf("neither profit nor loss");
        }
        return 0;

}     
*/

/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.  */

/*
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the marks of the of five subjects\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<33 || b<33 || c<33 || d<33 || e<33)
    {
        printf("Candidate has been failed");
    }
    else
    {
        printf("Candidate has been passed");
    }
    return 0;
}
*/

// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

/*
#include<stdio.h>
int main()
{
 char ch;
 printf("enter an alphabet\n");
 scanf("%c",&ch);
 if(ch>64 && ch<91)
 {
    printf("uppercase");
 }   
else if(ch>96 && ch<123)
{
    printf("lowercase");
}
return 0;
}
*/

// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
/*
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%6==0)
    {
        printf("It's divisible by 2 and 3");
    }
    else
    {
        printf("It's not divisible by 2 and 3");
    }
    return 0;
}
*/

// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
/*
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%42==0)
    {
        printf("It's divisible by 3 and 7");
    }
    else if(x%7==0)
    {
        printf("It's divisible by 7");
    }
    else if(x%3==0)
    {
         printf("It's divisible by 3");
    }
    else
    {
        printf("its not divisible by 7 and 3");
    }
    return 0;
}
*/

// 15. Write a program to check whether a given number is positive, negative or zero
/*
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x>0)
    printf("enetered number is postive");
    else if(x<0)
    printf("enetered number is negative");
    else
    printf("enetered number is zero");
}
*/

/* 16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character  */
/*
#include<stdio.h>
int main()
{
 char ch;
 printf("enter an alphabet\n");
 scanf("%c",&ch);
 if(ch>64 && ch<91)
 {
    printf("uppercase");
 }   
else if(ch>96 && ch<123)
{
    printf("lowercase");
}
else if(ch>32&&ch<48||ch>57&&ch<65||ch>122&&ch<128)
{
     printf("special character");
}
else if(ch>47&&ch<58)
{
    printf("a digit");
}
else
{
    printf("related to someother");
}
return 0;
}
*/

/* 17. Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not */
/*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<=c||b+c<=a||c+a<=b && a-b>=c||b-c>=a||c-a>=b )
    {
        printf("triangle is not valid");
    }
    else
    {
        printf("triangle is valid");
    }
    return 0;
}
*/

/* 18. Write a program which takes the month number as an input and display number of 
days in that month */
/*
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
    {
        printf("Number of days in the month are 31");
    }
    else if(x==2)
    {
         printf("Number of days in the month are 28");
    }
    else if(x==4||x==6||x==9||x==11)
    {
         printf("Number of days in the month are 30");
    }
    return 0;
    
}
*/