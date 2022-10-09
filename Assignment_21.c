// 1. Define a structure Employee with member variables id, name, salary

/*
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};

*/



// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
/*
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct Employee e;
    printf("Enter name of Employee::");
    scanf("%s",e.name);
    printf("Enter id of Employee::"); 
    scanf("%d",&e.id);
    printf("Enter salary of Employee::"); 
    scanf("%d",&e.salary);
    return 0;
}

*/

// 3. Write a function to display employee data. [ Refer structure from question 1 ]

/*
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct Employee e;
    printf("Enter name of Employee::");
    scanf("%s",e.name);
    printf("Enter id of Employee::"); 
    scanf("%d",&e.id);
    printf("Enter salary of Employee::"); 
    scanf("%d",&e.salary);
    printf("==============================\n");
    printf("Name   ===>  %s\nID     ===>  %d\nsalary ===>  %d",e.name,e.id,e.salary);
    return 0;
}
*/


// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
/*

#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct Employee e[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter name of Employee %d::",i+1);
        scanf("%s",e[i].name);
        printf("Enter id of Employee %d::",i+1); 
        scanf("%d",&e[i].id);
        printf("Enter salary of Employee %d::",i+1); 
        scanf("%d",&e[i].salary);
        printf("==============================\n");
    }
    printf("==============================\n");
     for(i=0;i<10;i++)
     {
         printf("Name   ===>  %s\nID     ===>  %d\nsalary ===>  %d\n",e[i].name,e[i].id,e[i].salary);
         printf("==============================\n");
     }
    return 0;
}
*/


// 5. Write a function to sort employees according to their salaries [ refer structure from question 1]

/*
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
int sal(int *s);
int main()
{
    struct Employee e[3],temp;
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter name of Employee %d::",i+1);
        scanf("%s",e[i].name);
        printf("Enter id of Employee %d::",i+1); 
        scanf("%d",&e[i].id);
        printf("Enter salary of Employee %d::",i+1); 
        scanf("%d",&e[i].salary);
        printf("==============================\n");
    }
    int j;
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
     for(i=0;i<3;i++)
     {
         printf("Name   ===>  %s\nID     ===>  %d\nsalary ===>  %d\n",e[i].name,e[i].id,e[i].salary);
         printf("==============================\n");
     }
}
*/


// 6. Write a function to sort employees according to their names [refer structure from question 1]

/*
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
int sal(int *s);
int main()
{
    struct Employee e[3],temp;
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter name of Employee %d::",i+1);
        scanf("%s",e[i].name);
        printf("Enter id of Employee %d::",i+1); 
        scanf("%d",&e[i].id);
        printf("Enter salary of Employee %d::",i+1); 
        scanf("%d",&e[i].salary);
        printf("==============================\n");
    }
    int j;
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(e[i].name,e[j].name)>0)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
     for(i=0;i<3;i++)
     {
         printf("Name   ===>  %s\nID     ===>  %d\nsalary ===>  %d\n",e[i].name,e[i].id,e[i].salary);
         printf("==============================\n");
     }
}
*/



// 7. Write a program to calculate the difference between two time periods.

/*
#include <stdio.h>
struct TIME
{
   int seconds;
   int minutes;
   int hours;
};

void differenceBetweenTimePeriod(struct TIME t1,
                                 struct TIME t2,
                                 struct TIME *diff);

int main() 
{
   struct TIME startTime, stopTime, diff;

   printf("Enter the start time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &startTime.hours,
         &startTime.minutes,
         &startTime.seconds);

   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stopTime.hours,
         &stopTime.minutes,
         &stopTime.seconds);

  
   differenceBetweenTimePeriod(startTime, stopTime, &diff);
   printf("\nTime Difference: %d:%d:%d - ", startTime.hours,
          startTime.minutes,
          startTime.seconds);
   printf("%d:%d:%d ", stopTime.hours,
          stopTime.minutes,
          stopTime.seconds);
   printf("= %d:%d:%d\n", diff.hours,
          diff.minutes,
          diff.seconds);
   return 0;
}
void differenceBetweenTimePeriod(struct TIME start,
                                 struct TIME stop,
                                 struct TIME *diff) 
{
   while (stop.seconds > start.seconds)
   {
      --start.minutes;
      start.seconds += 60;
   }
   diff->seconds = start.seconds - stop.seconds;
   while (stop.minutes > start.minutes)
   {
      --start.hours;
      start.minutes += 60;
   }
   diff->minutes = start.minutes - stop.minutes;
   diff->hours = start.hours - stop.hours;
}
*/





// 8. Write a program to store information of 10 students and display them using structure.
/*
#include<stdio.h>
struct Student
{
    int id;
    char name[20];
    long int phn;
};
int main()
{
    struct Student s[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter name of Student %d::",i+1);
        scanf("%s",s[i].name);
        printf("Enter id of Student %d::",i+1); 
        scanf("%d",&s[i].id);
        printf("Enter contact no. of Student %d::",i+1); 
        scanf("%ld",&s[i].phn);
        printf("============================================\n");
    }
    printf("================================================\n");
     for(i=0;i<10;i++)
     {
         printf("Name         ===>  %s\nID          ===>  %d\ncontact Number ===>  %ld\n",s[i].name,s[i].id,s[i].phn);
         printf("===========================================\n");
     }
    return 0;
}
*/

// 9. Write a program to store information of n students and display them using structure
/*
#include<stdio.h>
struct Student
{
    int id;
    char name[20];
    long int phn;
};
int main()
{
    int n;
    printf("Enter the size of n");
    scanf("%d",&n);
    struct Student s[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter name of Student %d::",i+1);
        scanf("%s",s[i].name);
        printf("Enter id of Student %d::",i+1); 
        scanf("%d",&s[i].id);
        printf("Enter contact no. of Student %d::",i+1); 
        scanf("%ld",&s[i].phn);
        printf("============================================\n");
    }
    printf("================================================\n");
     for(i=0;i<n;i++)
     {
         printf("Name         ===>  %s\nID          ===>  %d\ncontact Number ===>  %ld\n",s[i].name,s[i].id,s[i].phn);
         printf("===========================================\n");
     }
    return 0;
}
*/

/*10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.  */
/*
#include<stdio.h>
struct Marks
{
    int roll_no;
    char name[20];
    float chem_marks,maths_marks,phy_marks;
};
int main()
{
    struct Marks s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter roll number of Student %d::",i+1); 
        scanf("%d",&s[i].roll_no);
        printf("Enter name of Student %d::",i+1);
        scanf("%s",s[i].name);
        printf("Enter chemistry marks of Student %d::",i+1);
        scanf("%f",&s[i].chem_marks);
        printf("Enter maths marks of Student %d::",i+1);
        scanf("%f",&s[i].maths_marks);
        printf("Enter physics marks of Student %d::",i+1);
        scanf("%f",&s[i].phy_marks);
        printf("============================================\n");
    }
      printf("============================================\n");
    for(i=0;i<5;i++)
    {
        float percentage=((s[i].chem_marks + s[i].maths_marks + s[i].phy_marks)/300)*100;
          printf("============================================\n");
        printf("Percentage of student %d is %.2f%\n",i+1,percentage);
    }
    return 0;
}
*/
