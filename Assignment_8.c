// 1st Question 
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("*");
            else
            printf("");
        }
        printf("\n");
    }
    return 0;
}
*/

// 2nd Question
/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j>=6-i)
            printf("*");
            else
            printf(" ");
        }
            printf("\n");
    }

    return 0;
}
*/

// 3rd Question
/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<=6-i)
            printf("*");
            else
            printf(" ");
        }
            printf("\n");
    }

    return 0;
}
*/

// 4th Question
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/


// 5th Question
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=4+i&&j>=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

// 6th Question 
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=10-i&&j>=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

// 7th Question 
/*
#include<stdio.h>
int main()
{
    int i,j;
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            printf("*");
            else
            printf(" ");
        }
         for(j=1;j<=5;j++)
        {
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
            printf("\n");
    }
    
    return 0;
}
*/

// 8th Question

/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
       int k=1;
        for(int j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                if(j<=3)
                {
                    printf("%d",k);
                    k++;
                }
                if(j>=4)
                {
                    printf("%d",k);
                    k--;
                }
            }
            else
            printf(" ");
        }
            printf("\n");
    }

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i,j,count=0;
  for(i=1;i<=4;i++)
  {
    count=0;
    for(j=1;j<=4-i;j++)
    printf(" ");
    for(j=1;j<=i;j++)
    {
          printf("%d",++count);
    }
              count--;
    while(count)
    {
        printf("%d",count--);
    }
    printf("\n");
  }   
  return 0;
}
*/


// 9th Question 
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        int k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=8-i&&j>=i)
            {
                 if(j<=3)
                {
                    printf("%d",k);
                    k++;
                }
                if(j>=4)
                {
                    printf("%d",k);
                    k--;
                }
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int i,j,count=0;
  for(i=0;i<=3;i++)
  {
    count=0;
     for(j=0;j<=i-1;j++)
    {
          printf(" ");
    }
    for(j=0;j<=3-i;j++)
    printf("%d",++count);
              count--;
    while(count)
    {
        printf("%d",count--);
    }
    printf("\n");
  }   
  return 0;
}
*/

// 10th Question
/*
#include<stdio.h>
int main()
{
    int i,j,count=0;
  for(i=0;i<=3;i++)
  {
    count=0;
    for(j=0;j<=3-i;j++)
    printf("%d",++count);
    for(j=0;j<2*i-1;j++)
    {
          printf(" ");
    }
        if(i==0)
              count--;
    while(count)
    {
        printf("%d",count--);
    }
    printf("\n");
  }   
  return 0;
}
*/


// 11th Question
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        int k='A';
        for(j=1;j<=9;j++)
        {
            if(j<=4+i&&j>=6-i)
            {
                        if(j<=4)
                        {
                            printf("%c",k);
                            k++;
                        }
                         if(j>=5)
                        {
                            printf("%c",k);
                            k--; 
                        }
            }
             else
             printf(" ");
                
        }
        printf("\n");
    }
    return 0;
}
*/


// 12th Question
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        int k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=8-i&&j>=i)
            {
                 if(j<=3)
                {
                    printf("%c",k);
                    k++;
                }
                if(j>=4)
                {
                    printf("%c",k);
                    k--;
                }
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

// 13th Question
/*
#include<stdio.h>
int main()
{
    int i,j,count='@';
  for(i=0;i<=6;i++)
  {
    count='@';
    for(j=0;j<=6-i;j++)
    printf("%c",++count);
    for(j=0;j<2*i-1;j++)
    {
          printf(" ");
    }
        if(i==0)
              count--;
    while(count!='@')
    {
        printf("%c",count--);
    }
    printf("\n");
  }   
  return 0;
}
*/

// 14th Question
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j==1 || j==i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
        
    }
     printf("* * * * *");
}
*/

// 15th Question
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==5 || j==6-i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
        
    }
     printf("* * * * *");
}
*/

// 16th Question
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==4+i || j==6-i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
        
    }
      for(j=1;j<=9;j++)
    {
         printf("* ");
    }
    return 0;
}
*/

// 17th Question
/*
#include<stdio.h>
int main()
{
    int i,j;
      for(j=1;j<=9;j++)
    {
         printf("* ");
    }
    printf("\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==1+i || j==9-i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
        
    }
    
    return 0;
}
*/

// 18th Question
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=4+i&&j>=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(j<=9-i&&j>=i+1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

// 19th Question
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=19;j++)
        {
            if((j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    } 
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(i==1&&j==7)
            {
                printf("MySirG");
            }
            if(i==1&&j>=7&&j<=12)
                continue;
            if(j>=i&&j<=20-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

