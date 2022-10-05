/* 1. Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][20];
    printf("Enter five strings\n");
    int i,j,count=0;
    for(i=0;i<5;i++)
        fgets(s[i],20,stdin);
    for(i=0;i<5;i++)
    {
        count=0;
        for(j=0;s[i][j]!='\0';j++)
        {
            if(s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='i' || s[i][j]=='o' || s[i][j]=='u')
                count++;
        }
        printf("%s ===> %d\n",s[i],count);
    }
    return 0;
}
*/

// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10][20], temp[20];
    int i,j;
    printf("Enter city names\n");
    for(i=0;i<10;i++)
        gets(s[i]);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    printf("After sorting city names the list is::\n");
    for(i=0;i<10;i++)
        printf("%s \n",s[i]);
    return 0;
}
*/

// 3. Write a program to read and display a 2D array of strings in C language.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[3][20];
    int i;
    printf("Enter different types of strings\n");
    for(i=0;i<3;i++)
        fgets(s[i],20,stdin);
    printf("Entered strings are:\n");
    for(i=0;i<3;i++)
        printf("%s \n",s[i]);
}
*/

// 4. Write a program to search a string in the list of strings.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[3][20],a[20];
    int i,flag=0;
    printf("Enter different types of strings\n");
    for(i=0;i<3;i++)
        gets(s[i]);
    printf("Enter a string to find::");
    gets(a);
    for(i=0;i<3;i++)
    {
        flag=0;
        if(strcmp(a,s[i])==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Found in row-%d",i+1);
    else
        printf("Not Found");
    return 0;
}
*/

// 5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[3][20]={"bala@gmail.com","sainath@gmail.com","radhe@gmail.com"};
    int i,flag=0;
    for(i=0;i<3;i++)
    {
        if(strchr(s[i],'@')==0)
        {
             printf("odd email is::%s\n",s[i]);
             flag=1;
        }
    }
    if(flag==0)
        printf("No invalid emails");
    return 0;
}
*/

// 6. Write a program to print the strings which are palindrome in the list of strings.

/*
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter no of strings\n");
    scanf("%d", &n);
    char a[n][100];
    int i,j;
     printf("Enter  strings\n");
    for(i=0; i<n; i++)
    {
        scanf("%s", a[i]);
    }
    printf("============================\n");
    for(i=0;i<n;i++)
    {   
        int start = 0;
        int end = strlen(a[i])-1;
        while(start<=end)
        {
            if(a[i][start]!=a[i][end])
                break;
            start++;
            end--; 
        }
        if(start>end)
            printf("%s is a Palindrome\n",a[i]);
        else
           printf("%s is not a Palindrome\n",a[i]); 
    }

}
*/

// 7. From the list of IP addresses, check whether all ip addresses are valid.
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ip[20];
    printf("Enter an IP Address\n");
    scanf("%s",ip);
    char *a=strtok(ip,".");
    while(a!=NULL)
    {
        int x = atoi(a);
        if(x>=0 && x<=255)
            printf("%d ",x);
        a=strtok(NULL,".");
    }
    return 0;
}
*/

/* 8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 1 )  */


/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[5][20]={"hi","this","is","sai","bala"};
    char word1[]="this";
    char word2[]="bala";
    int i,w1=-1,w2=-1,min=100000,temp;
    for(i=0;i<5;i++)
    {
        if(strcmp(a[i],word1)==0)
            w1=i;
        if(strcmp(a[i],word2)==0)
            w2=i;
        if((w1 != -1) && (w2 != -1))
        {
            temp = abs(w1-w2);
            if(temp<min)
                min=temp;
            
        }
    }
    printf("Minimum distance between words is %d",min-1);
    return 0;
}
*/


/* 9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed */
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    char a[9][20]={"abhi","bala","chakshu","diwanshu","mohit","radhe","rishab","rito","vaibhav"};
    char uname[20];
    printf("Enter a username\n");
    scanf("%s",uname);
    int i,w1=-1;
    for(i=0;i<9;i++)
    {
        if(strcmp(a[i],uname)==0)
            w1=i;
        if(w1 != -1)
        {
           printf("factorial of 5 is %d",fact(5));
           break;
        }
        else
        {
            printf("Username does not exists");
            break;
        }

    }
    return 0;
}
*/

// 10. Create an authentication system. It should be menu driven.
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void login()
{
    char a[3][2][20]={{"bala","1706"},{"radhe","8288"},{"chakshu","2309"}};
    char uname[20],pswd[20];
    printf("\nEnter your Username and Password\n");
    scanf("%s %s",uname,pswd);
    int i,flag=0;
    for(i=0;i<3;i++)
    {
        if((strcmp(uname,a[i][0])==0) && (strcmp(pswd,a[i][1])==0))
        {
             printf("Login Successful..!!");
             flag=1;
        }
    }
    if(flag==0)
        printf("Entered Username or Password is Incorrect");
}
int main()
{
    int choice;
    while(1)
    {
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.To Login\n2.To Exit");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
           login();
            break;
        case 2:
           exit(0);
            break;
        default:
            printf("\nEnter a valid choice\n");
            break;
        }
    }
}
*/