// 1. Write a function to swap values of two in variables of calling function. (TSRS)
/*
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
    return 0;
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
*/

// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
/*
#include<stdio.h>
void swap(char**,char**);
int main()
{
    char a[20],b[20];
    printf("Enter two strings\n");
    scanf("%s %s",a,b);
    swap(&a,&b);
    printf("a=%s and b=%s",a,b);
    return 0;
}
void swap(char **p,char **q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
*/

// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
/*
#include<stdio.h>
void sort(int *p,int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}
void main()
{
    int a[5],i;
    printf("Enter the elements of an array\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    sort(a,5);
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
}
*/

// 4. Write a program in C to demonstrate how to handle the pointers in the program.

/*
#include<stdio.h>
int main()
{
    int x=10,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("%d %d %d %d\n",x,*p,**q,***r);
    printf("%d %d %d %d\n",&x,p,*q,**r);
    printf("%d %d %d\n",&p,q,*r);
    printf("%d %d\n",&q,r);
    printf("%d\n",&r);
}
*/

// 5. Write a program to find the maximum number between two numbers using a pointer
/*
#include<stdio.h>
int max(int*,int*);
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("Maximum between two numbers is::%d",max(&a,&b));
    return 0;
}
int max(int *p,int *q)
{
    if(*p>*q)
        return *p;
    else
        return *q;
}
*/


// 6. Write a program to calculate the length of the string using a pointer
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char *p,x[20];
    printf("Enter a string::");
    scanf("%s",x);
    p=&x;
    int i,count=0;
    for(i=0;*(p+i);i++)
            count++;
    printf("%d",count);
    return 0;
}
*/


// 7. Write a program to count the number of vowels and consonants in a string using a pointer.
/*
#include<stdio.h>
int main()
{
    char *p,x[20];
    printf("Enter a string::");
    scanf("%s",x);
    p=&x;
    int i,cons=0,vow=0;
    for(i=0;*(p+i);i++)
    {
        if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u')
            vow++;
        else
            cons++;
    }
    printf("No. of vowels are::%d\nNo. of consonants are::%d",vow,cons);
    return 0;
}
*/

// 8. Write a program to compute the sum of all elements in an array using pointers.
/*
#include<stdio.h>
int sum(int *p,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
       sum+=p[i];
    return sum;
}
void main()
{
    int a[5],i;
    printf("Enter the elements of an array\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Sum of the elements of an array is::%d",sum(a,5));
}
*/


// 9. Write a program to print the elements of an array in reverse order.
/*
#include<stdio.h>
void rev(int *p,int size)
{
    int i;
    printf("Reverse of an array is::");
    for(i=size-1;i>=0;i--)
         printf("%d ",p[i]);
}
void main()
{
    int a[5],i;
    printf("Enter the elements of an array\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    rev(a,5);
}
*/

// 10. Write a program to print a string in reverse using a pointer
/*
#include<stdio.h>
#include<string.h>
char rev_s(char *p)
{
    int i=0,j=strlen(p)-1,temp;
    while(i<=j)
    {
        temp=p[i];
        p[i]=p[j];
        p[j]=temp;
        i++;
        j--;
    }
 printf("Reverse of a string is:%s",p);
}
void main()
{
    char x[20];
    printf("Enter a string::");
    scanf("%s",x);
    rev_s(x);
}
*/