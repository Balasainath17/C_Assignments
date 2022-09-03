// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.
/*
#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
*/

// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
/*
#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    float avg;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/10.0;
    printf("%0.1f",avg);
    return 0;
}
*/


// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
/*
#include<stdio.h>
int main()
{
    int arr[10],i,sumO=0,sumE=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            sumE+=arr[i];
        else
            sumO+=arr[i];
    }
    printf("Sum of Even numbers is: %d\n",sumE);
    printf("Sum of Odd numbers is: %d",sumO);
    return 0;
}
*/

// 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
/*
#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("Enter 10 numbers\n");
    int max=-1;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("Greatest number is:%d",max);
    return 0;
}
*/

// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
/*
#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("Enter 10 numbers\n");
    int min=999999;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Shortest number is:%d",min);
    return 0;
}
*/

// 6. Write a program to sort elements of an array of size 10. Take array values from the user.
/*
#include<stdio.h>
int main()
{
    int arr[10],i,j,temp;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array is:\n");
    for(i=0;i<=9;i++)
         printf("%d ",arr[i]);
    return 0;
}
*/

// 7. Write a program to find second largest in an array.Take array values from the user.
/*
#include<stdio.h>
int main()
{
    int arr[10],i,l_2,temp;
    printf("Enter 10 numbers\n");
    int max=-1;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
        {
            temp=max;
          max=arr[i];
          l_2=temp;
          if(l_2<max)
          {
            l_2=arr[i-1];
          }
        }
    }
    printf(" second Greatest number is:%d",l_2);
    return 0;
}
*/

// 8. Write a program to find the second smallest number in an array.Take array values from the user.
/*
#include<stdio.h>
int main()
{
    int arr[10],i,j,temp;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
         printf("second smallest is:%d",arr[1]);
    return 0;
}
*/

// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
/*
#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
/*
#include<stdio.h>
int main()
{
    int arr[10],i,b[i];
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
        b[i]=arr[i];
    }
    return 0;
}
*/



