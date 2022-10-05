// 1. Write a program to calculate the length of the string. (without using built-in method)
/*
#include<stdio.h>
int main()
{
  int a;
  a=printf("balasainath");
  printf("\nLength of the string is:%d",a);
  return 0;  
}
*/


/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10]="balasai";
    int i,count=0;
    for(i=0;s[i];i++)
    {
        if(s[i]!='\0')
            count++;
    }
    printf("%d",count);
    return 0;
}
*/


// 2. Write a program to count the occurrence of a given character in a given string.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    char x;
    printf("Enter a string::");
    fgets(s,20,stdin);
    printf("Enter a character::");
    scanf("%c",&x);
    int i;
    int count=0;
    for(i=0;s[i];i++)
    {
        if(s[i]==x)
          count++;
    }   
    printf("%d",count);
    return 0;
}
*/



// 3. Write a program to count vowels in a given string
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter a string::");
    fgets(s,20,stdin);
    int i;
    int count=0;
    for(i=0;s[i];i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
          count++;
    }   
    printf("%d",count);
    return 0;
}
*/

// 4. Write a program to convert a given string into uppercase
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter a string::");
    fgets(s,20,stdin);
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32;      
    }   
    printf("%s",s);
    return 0;
}
*/


// 5. Write a program to convert a given string into lowercase
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter a string::");
    fgets(s,20,stdin);
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;      
    }   
    printf("%s",s);
    return 0;
}
*/

// 6. Write a program to reverse a string.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter a string::");
    fgets(s,20,stdin);
    int i=0,j=strlen(s)-1,temp;
    while(i<=j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    printf("%s",s);
    return 0;
}
*/


// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter a string::");
    fgets(s,20,stdin);
    int i,alpha=0,num=0,spl=-1;
    for(i=0;s[i];i++)
    {
         if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')  
            alpha++;
        else if(s[i]>='0' && s[i]<='9')
            num++;
        else
            spl++;
    }   
    printf("%d %d %d",alpha,num,spl);
    return 0;
}
*/



// 8. Write a program in C to copy one string to another string.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter  string 1::");
    fgets(s1,20,stdin);
    printf("Enter  string 2::");
    fgets(s2,20,stdin);
    strcpy(s1,s2);
    printf("%s",s1);
    return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter  string 1::");
    fgets(s1,20,stdin);
   for(int i=0;s1[i];i++)
   {
       s2[i]=s1[i];
   }
    printf("%s",s2);
    return 0;
}
*/


// 9. Write a C program to sort a string array in ascending order.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter a string::");
    fgets(s,20,stdin);
    int i,j,temp;
   for(i=0;s[i];i++)
   {
      for(j=i+1;s[j];j++)
      {
          if(s[i]>s[j])
          {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
          }
        
      }
   }
    printf("%s",s);
    return 0;
}
*/


// 10. Write a program in C to Find the Frequency of Characters.

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter a string ::");
    fgets(s,20,stdin);
    int i,freq[150]={0};
    while(s[i]!='\0')
    {
        freq[s[i++]]++;
    }
    for(i=0;i<150;i++)
    {
        if(freq[i]!=0)
             printf("%c ===>  %d\n",i,freq[i]);
    }   
    return 0;
}
*/
