// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
/*
#include<stdio.h>
int greatest(int);
int main()
{
    printf("Greatest number is:%d",greatest(5));;
    return 0;
}
int greatest(int x)
{
     int arr[x],i,sum=0;
    printf("Enter numbers\n");
    int max=-1;
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
   return max;
}
*/

// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
/*
#include<stdio.h>
int smallest(int);
int main()
{
    printf("Shortest number is:%d",smallest(5));
    return 0;
}
int smallest(int x)
{
    int arr[x],i,sum=0;
    printf("Enter numbers\n");
    int min=999999;
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
*/

// 3. Write a function to sort an array of any size. (TSRN)
/*
#include<stdio.h>
void sort(int);
void main()
{
    sort(5);
}
void sort(int x)
{
    int arr[x],i,j,temp;
    printf("Enter numbers\n");
    for(i=0;i<=x-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<=x-1;j++)
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
    for(i=0;i<=x-1;i++)
         printf("%d ",arr[i]);
}
*/

/* 4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )  */
/*
#include<stdio.h>
void rot(int,int);
int main()
{
     rot(5,2);
}
void rot(int x,int d)
{
    int i,j,temp,a[x];
    printf("Enter the elements\n");
    for(i=0;i<x;i++)
          scanf("%d",&a[i]);
    for(j=0;j<d;j++)
    {
        temp=a[0];
        for(i=0;i<x-1;i++)
        {
            a[i]=a[i+1];
        }
        a[x-1]=temp;
    }
    printf("After rotation is:");
     for(i=0;i<x;i++)
        printf("%d ",a[i]);
}
*/

// 5. Write a function to find the first occurrence of adjacent duplicate values in the array
/*
#include<stdio.h>
int adjD(int);
void main()
{
  
   printf("first duplicate is:%d", adjD(5));
}
int adjD(int n)
{
    int i,a[n];
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
         if(a[i]==a[i+1])
            return a[i];
    }
}
*/

// 6. Write a function in C to read n number of values in an array and display it in reverse order
/*
#include<stdio.h>
void rev(int);
void main()
{
    rev(5);
}
void rev(int n)
{
    int i,a[n];
    printf("Enter the values\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reverse of an array is:");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
}
*/

// 7. Write a function in C to count a total number of duplicate elements in an array.
/*
#include<stdio.h>
int dup(int);
void main()
{
    printf("Number of duplicates is/are:%d",dup(10));
}
int dup(int n)
{
    int i,j,a[n],count=0;
    printf("Enter the number of values\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
    }
    return count;
}
*/

// 8. Write a function in C to print all unique elements in an array.
/*
#include<stdio.h>
int uniq(int);
void main()
{
   uniq(5);
}
int uniq(int n)
{
    int i,j,a[n];
    printf("Enter the number of values\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
               a[j]=-47;
        }
    }
    printf("Unique elements are\n");
    for(i=0;i<n;i++)
    {
        if(a[i]!=-47)
            printf("%d ",a[i]);
    }
}
*/

// 9. Write a function in C to merge two arrays of the same size sorted in descending order.
/*
#include<stdio.h>
void merge();
void main()
{
    merge();
}
void merge()
{
    int i,j,k,c[10];
    int a[]={41,32,25,17,9};
    int b[]={40,32,24,16,8};
    for(k=0;k<10;k++)
    {
        if(i>=5)
        {
            while(k<10)
            {
                c[k]=b[j];
                j++;
                k++;
                if(k==10)
                    break;
            }
        }
        else if(a[i]>b[j])
        {
            c[k]=a[i];
            i++;
        }
        else if (j>=5)
        {
            while(k<10)
            {
                c[k]=a[i];
                i++;
                k++;
                if(k==10)
                    break;
            }
        }
        else 
        {
            c[k]=b[j];
            j++;
        }
        
    }
    for(k=0;k<10;k++)
    {
        printf("%d ",c[k]);
    }
}
*/

// 10. Write a function in C to count the frequency of each element of an array.
/*
#include<stdio.h>
int freq();
void main()
{
    freq();
}
int freq()
{
    int a[10];
    int b[10]={1,2,3,5,4,5,2,5,5,4};
    int i,j,vis=-1;
    for(i=0;i<10;i++)
    {
       int count=1;
       for(j=i+1;j<10;j++)
       {
            if(b[i]==b[j])
            {
                count++;
                a[j]=vis;
            }
       }
       if(a[i]!=vis)
            a[i]=count;
    }
         printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(int i = 0; i < 10; i++)
    {    
        if(a[i] != vis)
        {    
            printf("    %d", b[i]);    
            printf("    |  ");    
            printf("  %d\n", a[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}   
*/







