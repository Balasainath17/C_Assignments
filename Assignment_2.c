// 1. Write a program to print unit digit of a given number
/*
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    printf("entered number last digit is %d",x%10);
    return 0;
}
*/

// 2. Write a program to print a given number without its last digit.
/*
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    printf("number without last digit is %d",x/10);
    return 0;
}
*/

// 3. Write a program to swap values of two int variables
/*
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter values of a and b\n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("value of a is %d value of b is %d",a,b);
    return 0;
}
*/

// 4. Write a program to swap values of two int variables without using a third variable.
/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values of a and b\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a is %d value of b is %d",a,b);
    return 0;
}
*/
// 5. Write a program to input a three-digit number and display the sum of the digits.
/*
#include<stdio.h>
int main()
{
    int x,rem=0,sum=0;
    printf("enter the three digit value");   //also solve by loops
    scanf("%d",&x);
    rem=x%10;
    x=x/10;
    sum=sum+rem;
      rem=x%10;
    x=x/10;
    sum=sum+rem;
      rem=x%10;
    x=x/10;
    sum=sum+rem;
    printf("%d",sum);
    return 0;
}
*/
// 6. Write a program which takes a character as an input and displays its ASCII code.
/*
#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    printf("%d",a);
    return 0;
}
*/

// 7. Write a program to find the position of first 1 in LSB
/*
#include<stdio.h>
int main()
{
    int x,count=0,result=0;
    printf("enter the value\t");
    scanf("%d",&x);
    while(x!=0)
    {
        result=x&1;
        count++;
        if(result==1)
        {
            printf("%d",count);
            break;
        }
        x=x>>1;
    }
    return 0;
}
*/

/* 8. Write a program to check whether the given number is even or odd using a bitwise
operator. */
/*
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\t");
    scanf("%d",&a);
    if(a&1==1)
    {
        printf("number is odd");
    }
    else
    {
        printf("number is even");
    }
    return 0;
}
*/

// 9. Write a program to print size of an int, a float, a char and a double type variable
/*
#include<stdio.h>
int main()
{
    int x;
    x=sizeof(int);
    printf("size of int is %d\n",x);
    int y;
     y=sizeof(float);
    printf("size of float is %d\n",y);
    int z;
     z=sizeof(char);
    printf("size of char is %d\n",z);
    int a;
     a=sizeof(double);
    printf("size of double is %d\n",a);
    return 0;
}
*/

/* 10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)  */
/*
#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x\t");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("%d",x);
    return 0;
}
*/

/* 11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)  */
/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the value of number\t");
    scanf("%d",&x);
    printf("enter the value of digit\t");
    scanf("%d",&y);
    int result;
    x=x*10;
    result=x+y;
    printf("%d",result);
    return 0;
}
*/

/* 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.  */
/*
#include<stdio.h>
int main()
{
    float x;
    printf("enetr the amount in indian rupees\t");
    scanf("%f",&x);
    x=x/76.23;
    printf("amount in USD is %0.1f $",x);
    return 0;
}
*/

/* 13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.  */
/*
#include<stdio.h>
int main()
{
    int x,y,res;
    printf("enter the 3 digit number ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    res=y*100+x;
    printf("%d",res);
    return 0;
}
*/