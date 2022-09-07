// 1. Write a program to calculate the sum of two matrices each of order 3x3
/*
#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    int c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

// 2. Write a program to calculate the product of two matrices each of order 3x3.
/*
#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,k,sum;
    int c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
              sum=0;  
            for(k=0;k<3;k++)
            {
                sum+=a[i][k]*b[k][j];
            } 
            c[i][j]=sum;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
// 3. Write a program in C to find the transpose of a given matrix.
/*
#include<stdio.h>
int main()
{
    int a[3][3]={2,3,7,8,9,10,4,7,1};
    int b[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
         {
            b[i][j]=a[j][i];
         }
    }
    printf("given matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

// 4. Write a program in C to find the sum of right diagonals of a matrix.
/*
#include<stdio.h>
int main()
{
    int a[3][3]={10,2,3,4,20,6,7,8,30};
    int i,j,sum=0;
    int c[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
                sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
*/

// 5. Write a program in C to find the sum of left diagonals of a matrix.
/*
#include<stdio.h>
int main()
{
    int a[3][3]={10,2,35,4,15,6,10,8,30};
    int i,j,sum=0;
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            if(i+j==2)
                sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
*/

// 6. Write a program in C to find the sum of rows and columns of a Matrix.
/*
#include<stdio.h>
int main()
{
    int a[3][3]={10,2,35,4,15,6,10,8,40};
    int i,j,sumR,sumC,c=0,d=0;
       for(i=0;i<3;i++)
        {
            sumR=0;
            for(j=0;j<3;j++)
            {   
                    sumR+=a[i][j];
            }
            c+=sumR;
        }
        printf("sum of the rows is:%d \n",c);
      for(i=0;i<3;i++)
        {
            sumC=0;
             for(j=0;j<3;j++)
            {   
                    sumC+=a[j][i];
            }
            d+=sumC;
        }
         printf("sum of the coloumns is:%d ",d);
    return 0;
}
*/

// 7. Write a program in C to print or display the lower triangular of a given matrix.
/*
#include<stdio.h>
int main()
{
    int a[3][3]={1,2,5,4,15,86,40,18,3};
    int i,j,sum=0;
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            if(j>i)
              a[i][j]=0;  
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

// 8. Write a program in C to print or display an upper triangular matrix.
/*
#include<stdio.h>
int main()
{
    int a[3][3]={1,2,5,4,15,86,40,18,3};
    int i,j;
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            if(j<i)
              a[i][j]=0;  
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
/*
#include<stdio.h>
int main()
{
    int a[3][3]={0,1,0,4,8,0,0,0,3};
    int i,j,count=0;
       for(i=0;i<3;i++)
        {
          
            for(j=0;j<3;j++)
            {   
                if(a[i][j]==0)
                count++;  
            }
        }
    if(count>9/2)
        printf("Sparse");
    else
        printf("Dense");
    return 0;
}
*/

// 10. Write a program in C to find the row with maximum number of 1s.
/*
#include<stdio.h>
int main()
{
    int a[3][3]={1,5,1,6,9,4,1,1,1};
    int i,j,count,max=0,index=0;
       for(i=0;i<3;i++)
        {
          count=0;
            for(j=0;j<3;j++)
            {   
                if(a[i][j]==1)
                count++;  
            }
            if(count>max)
            {
                 max=count;
                 index=i+1;
            }
        }
    printf("maximum Number of 1's are %d in %d row",max,index);
    return 0;
}
*/