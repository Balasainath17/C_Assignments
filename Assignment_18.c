// 1. Write a function to calculate length of the string
/*
#include<stdio.h>
#include<string.h>
int string_length()
{
    char s[20]="balasainath";
    int i,count=0;
    for(i=0;s[i];i++)
    {
        if(s[i]!='\0')
            count++;
    }
    return count;
}
void main()
{
    printf("%d",string_length());
}
*/

// 2. Write a function to reverse a string.
/*
#include<stdio.h>
#include<string.h>
int rev_string()
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
void main()
{
    rev_string();
}
*/

// 3. Write a function to compare two strings.
/*

#include <stdio.h>  
int compareTwoString(char[],char[]);  
int main()  
{  
   char str1[50]; 
   char str2[50]; 
   
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   
   printf("Enter the second string : ");  
   scanf("%s",str2);  
   
   int c= compareTwoString(str1,str2); 
   if(c==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
  
   return 0;  
}  
  

int compareTwoString(char a[],char b[])  
{  
    int flag=0,i=0;  
    while(a[i]!='\0' &&b[i]!='\0')  
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    } 
    if(a[i]!='\0'||b[i]!='\0')
       return 1;
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  

*/

// 4. Write a function to transform string into uppercase
/*
#include<stdio.h>
#include<string.h>
int upp_case(char *s)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32;      
    }   
    printf("%s",s);
    return 0;
}
void main()
{
    char s[20];
    printf("Enter a string::");
    fgets(s,20,stdin);
    upp_case(s);
}
*/

// 5. Write a function to transform a string into lowercase
/*
#include<stdio.h>
#include<string.h>
int low_case(char *s)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;      
    }   
    printf("%s",s);
    return 0;
}
void main()
{
    char s[20];
    printf("Enter a string::");
    fgets(s,20,stdin);
    low_case(s);
}
*/


// 6. Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)
/*
#include<stdio.h>
#include<string.h>
void aplha_num(char *s)
{
    int i;
    int flag1=0,flag2=0;
    for(i=0;s[i];i++)
    {
       if((s[i]>='a' && s[i]<='z') || (s[i]>='A' &&  s[i]<='Z') )  
       {
           flag1=1;
       }
       if(s[i]>='0' && s[i]<='9')
            flag2=1;
    }  
    if(flag1==1 && flag2==1)
        printf("Alphanumeric");
    else
        printf("Not Alphanumeric");
}
void main()
{
    char s[20];
    printf("Enter a string::");
    fgets(s,20,stdin);
    aplha_num(s);
}
*/

// 7. Write a function to check whether a given string is palindrome or not.

/*
#include<stdio.h>
#include<string.h>
void palin(char *s)
{
    int i=0,j=strlen(s)-1;
    while(i<=j)
    {
        if(s[i]==s[j])
            break;
        i++;
        j--;
    }
    if(i>j)
        printf("It's a Palindrome");
    else
        printf("Not a Palindrome");
}
void main()
{
    char s[20];
    printf("Enter a string::");
    fgets(s,20,stdin);
    palin(s);
}
*/

// 8. Write a function to count words in a given string
/*
#include<stdio.h>
#include<string.h>
int No_of_words(char *s)
{
    int i,count=1;
     for(i=0;s[i];i++)
     {
         if(s[i]==' ' || s[i]=='.' || s[i]==',' && s[i+1]!=' ')
            count++;
     }
     return count;
}

void main()
{
    char s[200];
    printf("Enter a string::");
    fgets(s,200,stdin);
    printf("No. of words in the given string are::%d",No_of_words(s));
}
*/


/*9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” ) */
/*
#include<stdio.h>
#include<string.h>
void swap(char s[],int i,int j)
{
    char temp;
    while(i<=j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}
void rev_words(char *s)
{
    int i=0,start=0,end=0,flag=0;
    while(s[i]!='\0')
    {
        while(s[i]!=' ')
        {
            if(s[i]=='\0')
            {
                flag=1;
                break;
            }
            end++;
            i++;
        }
        swap(s,start,end-1);
        if(flag==1)
            break;
        start=end++;
        i++;
    }
    swap(s,0,i-1);
    printf("%s ",s);
}
void main()
{
    char s[200]=" Hi this is balasainath";
    rev_words(s);
}
*/


// 10. Write a function to find the repeated character in a given string.
/*
#include<stdio.h>
#include<string.h>
int rep_charac(char *s)
{
    int i,count=0;
    char x;
    printf("enter a character::");
    scanf("%c",&x);
    for(i=0;s[i];i++)
    {
        if(s[i]==x)
            count++;
    }
    return count;
}

void main()
{
    char s[200];
    printf("Enter a string::");
    fgets(s,200,stdin);
    printf("%d",rep_charac(s));
}
*/