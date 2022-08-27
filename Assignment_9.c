// 1. Write a program which takes the month number as an input and display
// number of days in that month.
/*
#include<stdio.h>
int main()
{
    int x;
        printf("Enter a month\n");
        scanf("%d",&x);
    switch (x)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;
        case 4:    
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;
        case 2:
            printf("28/29 days");
            break;        
    default:
            printf("Invalid Month");
        break;
    }
}
*/

/* 2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit  */

/*
#include<stdio.h>
int main()
{
       int x,a,b;
    while (1)
     {
             
                printf("\n1.Addition");
                printf("\n2.Subtraction");
                printf("\n3.Multiplication");
                printf("\n4.Division");
                printf("\n5.Exit");
                printf("\nenter you choice\n");
                scanf("%d",&x);
                switch (x)
                {
                case 1:
                    printf("enter two numbers\t");
                    scanf("%d%d",&a,&b);
                    printf("\nsum is %d\n",a+b);
                    break;
                case 2:
                printf("enter two numbers\t\n");
                    scanf("%d%d",&a,&b);
                    printf("difference is %d",a-b);
                    break;
                case 3:
                        printf("enter two numbers\t");
                    scanf("%d%d",&a,&b);
                    printf("product is %d\n",a*b);
                    break;
                case 4:
                printf("enter two numbers\t");
                    scanf("%d%d",&a,&b);
                    printf("division is %d\n",a/b);
                    break;
                    case 5:
                        break;
                default:
                    printf("invalid choice");
                    break;
                }
                if(x==5)
                break;
        }        
        return 0;
}
*/

// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
/*
#include<stdio.h>
int main()
{
     int x;
        printf("Enter a Day\n");
        scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Happy Monday");
        break;
    case 2:
        printf("Happy Tuesday");
        break;
    case 3:
        printf("Happy Wednesday");
        break;
    case 4:
        printf("Happy Thursday");
        break;
    case 5:
        printf("Happy Friday");
        break;
    case 6:
        printf("Happy Saturday");
        break;
    case 7:
        printf("Happy Sunday");
        break;  
    default:
        printf("Invalid day");
    } 
    return 0;                         
}
*/

/*  4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit  */
/*
#include<stdio.h>
int main()
{
    int x,a,b,c;
    while(1)
    {
     printf("Enter the sides of triangle\n");
                scanf("%d%d%d",&a,&b,&c);
    if(a+b<=c||b+c<=a||c+a<=b && a-b>=c||b-c>=a||c-a>=b)
    {
      printf("It's not a Triangle\n");
    }
    else
    {
          printf("\n1.Check for Isosceles\n2.Check for Right Angled\n3.Check for Equilateral\n4.Exit");
         printf("\nEnter your choice\t");
         scanf("%d",&x);
        switch (x)
        {
        case 1:
              
           if(a==b&&a!=c || b==c&&b!=a || c==a&&c!=b)
                printf("Isosceles Triangle");
            else
                 printf("Not a Isosceles Triangle");
            break;
        case 2:
                
            if(a*a==(b*b+c*c) || b*b==(a*a+c*c) || c*c==(a*a+b*b))
                printf("Right Angled Triangle");
            else
                 printf("Not a Right Angled Triangle");
              break;   
        case 3:
                
            if(a==b && a==c)
                printf("Equilateral Triangle");
            else
                printf("Not a Equilateral Triangle");
             break; 
        case 4:
             break;  
        default:
            break;
        }
    }
    if(x==4)
        break;
    }
    return 0;
}
*/

/* 5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/
/*
#include<stdio.h>
int main()
{
    int x;
        printf("Enter a number\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;            
        
        default:
            printf("invalid");
            break;
        }
        return 0; 
}
*/

// 6. Program to check whether a year is a leap year or not. Using switch statement

/*
#include<stdio.h>
int main()
{
     int x,y;
        printf("Enter year:-\n");
        scanf("%d",&y);
        x=((y%4==0)&&((y%100!=0)||(y%400==0)));
        switch (x)
        {
            case 1:
                printf("It's a Leap year");
                break;
            case 0:
                printf("It's not a Leap year");
                break;
            default:
            printf("Invalid Year");
            break;
        }
            return 0;
}
*/

/*7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.  
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/uni  */

/*
#include<stdio.h>
int main()
{
    int x;
    float y,sum=0;
    printf("Enter No. of Units:-");
    scanf("%d",&x);
    switch(x)
    {
        case 1 ... 50:
            y=x*0.50;
            break;
        case 51 ... 150:
            y=x*0.75;
            break;
        case 151 ... 250:
            y=x*1.20;
            break;
        default:
            y=x*1.50;
            break;
    }
    sum=y+0.2*y;
    printf("%0.2f",sum);
}
*/
/*8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/

/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("\n1.To convert into negative\n2.To convert into positive");
    printf("\nEnter Your choice\t");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("Enter Your Number:");
            scanf("%d",&y);
            printf("%d",-y);
            break;
         case 2:
            printf("Enter Your Number:");
            scanf("%d",&y);
            printf("%d",-y);
            break;
        default:
            break;
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int x,y;
     printf("Enter Your Number:");
            scanf("%d",&y);
            x=(y>0||y!=0);
            switch(x)
            {
                case 1:
                 printf("%d",-y);
                break;
            case 0:
             printf("%d",-y);
                break;
            default:
                break;
            }
            return 0;
}
*/

//  9. Program to Convert even number into its upper nearest odd number Switch Statement.
/*
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a number\t");
    scanf("%d",&x);
    y=x%2==0;
    switch(y)
    {
        case 1:
            printf("%d",x+1);
            break;
        case 0:
            printf("It's an odd number");
        default:
            break;
    }
    return 0;
}
*/

// 10. C program to find all roots of a quadratic equation using switch case
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D,x;
    float y,z;
    printf("Enter the values of coefficients\n");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
        x=1;
    else if(D<0)
        x=2;
    else if(D=0)
        x=3;
        switch(x)
        {
            case 1:
               y=(-b+sqrt(D))/(2*a); 
               z=(-b-sqrt(D))/(2*a);
               printf("Roots are  %0.1f %0.1f",y,z);
               break;
            case 2:
                y=(-b/(2*a));
               z=(sqrt(-D)/(2*a));
               printf("Roots are  %f+%fi",y,z);
                printf("Roots are  %f-%fi",y,z);
               break;
            case 3:
                 y=(-b/2*a);
                 printf("%d&%d",y,y);
                 break;
            default:
                break;
        }
        return 0;
}
*/