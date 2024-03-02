/*
Name: Ahmed AbdelAziz
Course: Embedded C
Lecture: 1 + TASK 1
Subjects: Control FLOW.
IF +
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
//IF Condition. [True or False]
    //Check equality of x & y.
 // (==)(!=)(>=)(>=)(>)(<), [&&,||] more than one condition for the same output AND/OR
 //  nested if condition works as logic AND.
    int x=0,y=0;
    printf("\n Enter two numbers to compare equality\n");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x==y) // False = 0, true != 0.
    {
        printf("\n Congrats! You've got a Match!!\n");
    }
    else if (x>y)
    {
     printf("\n x > y \n");
    }
    else //without else if/else the if condition not verified the if condition will be skipped.
    {
        printf("\n x < y \n");
    }
































        return 0;
}
