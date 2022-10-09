
// 1. Define a function to input variable length string and store it in an array without memory wastage.


/*
#include <stdio.h>
int main()
{
    char *s,c;
    int i=0,j=1;
    s=(char*) malloc(sizeof(char));
    printf("Enter a string::");
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        s=(char*) realloc(s,j*sizeof(char));
        s[i]=c;
        i++;
    }
    s[i]='\0';
    printf("Entered String is::%s",s);
    return 0;
}
*/


/*2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values. */
/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i=0,sum=0,size;
    printf("enter size of an array::");
    scanf("%d",&size);
    p=(int*)calloc(size,sizeof(int));
    
    printf("Enter %d values::\n",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);
    for(i=0;i<size;i++)
        sum=sum+*(p+i);
    printf("Average of the numbers are::%d",sum/size);
    free(p);
    return 0;
}
*/


// 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.

/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i=0,sum=0,size;
    printf("enter size of an array::");
    scanf("%d",&size);
    p=(int*) malloc(size*sizeof(int));
    
    printf("Enter %d values::\n",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);
    for(i=0;i<size;i++)
        sum=sum+*(p+i);
    printf("sum of the entered numbers is::%d",sum);
    free(p);
    return 0;
}
*/


// 4. Write a program to input and print text using dynamic memory allocation.

/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    char *s,c;
    int i=0,j=1;
    s=(char*) malloc(sizeof(char));
    printf("Enter a string::");
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        s=(char*) realloc(s,j*sizeof(char));
        s[i]=c;
        i++;
    }
    s[i]='\0';
    printf("Entered String is::%s",s);
    return 0;
}
*/

// 5. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation.

/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i=0,sum=0,size;
    printf("enter size of an array::");
    scanf("%d",&size);
    p=(int*) malloc(size*sizeof(int));
    
    printf("Enter %d values::\n",size);
    for(i=0;i<size;i++)
    {
        printf("Enter element no.%d::",i+1);
        scanf("%d",p+i);
    }
        
    for(i=0;i<size;i++)
    {
        sum=sum+*(p+i);
        printf("%d",p[i]);
        if(i!=size-1)
            printf("+");
    }
    printf("=%d",sum);
    free(p);
    return 0;
}
*/

// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.

/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i=0,sum=0,size,largest;
    printf("enter size of an array::");
    scanf("%d",&size);
    p=(int*) malloc(size*sizeof(int));
    
    printf("Enter %d values::\n",size);
    for(i=0;i<size;i++)
    {
        printf("Enter element no.%d::",i+1);
        scanf("%d",p+i);
    }
    largest=p[0];    
    for(i=0;i<size;i++)
    {
       if(p[i]>largest)
        largest=p[i];
    }
    printf("Largest element in an array is::%d",largest);
    free(p);
    return 0;
}
*/

// 7. Write a program to demonstrate memory leak in C.
/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*) malloc(sizeof(int));
    p=NULL;
    return 0;
}
*/

// 8. Write a program to demonstrate dangling pointers in C.

/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
     p=(int*) malloc(sizeof(int));
     *p=10;
      printf("before free of pointer is :%d\n",*p);
    free(p);
    printf("after free of pointer is :%d",*p);
    return 0;
}
*/


// 9. Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed.
/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i=0,sum=0,size;
    printf("enter size of an array::");
    scanf("%d",&size);
    p=(int*) malloc(size*sizeof(int));
    if(*p=NULL)
    {
        printf("Memory allocation has been failed");
        return 0;
    }
    printf("Enter %d values::\n",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);
    for(i=0;i<size;i++)
        sum=sum+*(p+i);
    printf("Average of the numbers are::%d",sum/size);
    free(p);
    return 0;
}
*/


// 10. Find out the maximum and minimum from an array using dynamic memory allocation in C.

/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i=0,sum=0,size,maximum,minimum;
    printf("enter size of an array::");
    scanf("%d",&size);
    p=(int*) malloc(size*sizeof(int));
    
    printf("Enter %d values::\n",size);
    for(i=0;i<size;i++)
    {
        printf("Enter element no.%d::",i+1);
        scanf("%d",p+i);
    }
    maximum=p[0];
    minimum=p[size-1];
    for(i=0;i<size;i++)
    {
       if(p[i]>maximum)
             maximum=p[i];
        else if(p[i]<minimum)
            minimum=p[i];
    }
    printf("Maximum and Minimum elements in an array are::%d and %d",maximum,minimum);
    free(p);
    return 0;
}

*/

