#include<stdio.h>
int main()
{
    int marks[10];
    for(int i=0;i<10;i++) 
    {
        printf(" Enter the  Roll number %d student mark =",i+1);

        scanf("%d",&marks[i]);   // Enter the Marks of student 

    }

    for(int j=0;j<10;j++)
    {
        if (marks[j]<35)
        {
            printf(" \n %droll number of student mark is less than 35 ",j+1);  // print the roll number of student who has less than 35 marks in class 
        }
    } 
}
