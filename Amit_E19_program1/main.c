/*
Name: Ahmed AbdelAziz
Course: Embedded C
Lecture: 1 + TASK 1
Subjects:
INRODUCTION + BITWISE OPERATOR + Size OF
+ INPUTS. [scanf()] + TASK 1.
*/

// Preprocessor.
#include <stdio.h>
#include <stdlib.h>

/*
 Multi line
 comment
*/

// Prototype.

// Global Variables.

// Main Function.
int main()
{

// Code 1: INRODUCTION.
    /*
    int x = 0; //key words can't be used as var.
    char y = 10;

    printf("y = %d",y++ );
    printf("\ny = %d",y++ ); // d for int, %c for char. %d for char is ascii code.
    printf("\n Hello world!\n");
    */

// Code 2: BITWISE OPERATOR.
    /*
     unsigned int a=60; //0060=0011 1100 .
     unsigned int b=13; //0013=0000 1101 .
     int c=0;           //0000=0000 0000 .
    //Operators.
     c=a&b;   //AND     //0012=000 1100  .
     printf ("\n line 1 \n value of c is %d \n", c);
     c=a|b;   //OR      //0061=0011 1101 .
     printf ("\n line 2 \n value of c is %d \n", c);
     c=a^b;   //XOR     //0049=0011 0001 .
     printf ("\n line 3 \n value of c is %d \n", c);
     c=~a;    // ONE var. complement
                        //-061=1100 0011 .
     printf ("\n line 4 \n value of c is %d \n", c);
     c=~b;              //-014=1111 0010 .
     printf ("\n line 5 \n value of c is %d \n", c);
     c=a<<2;            //0240=1111 0000 .
     printf ("\n line 6 \n value of c is %d \n", c);
     c=b<<2;            //0052=0011 0100 .
     printf ("\n line 7 \n value of c is %d \n", c);
     c=a>>2;            //0015=0000 1111 .
     printf ("\n line 8 \n value of c is %d \n", c);
     c=b>>2;            //0003=0000 0011 .
     printf ("\n line 9 \n value of c is %d \n", c);
    */

// Code 3: Size OF.
 //Example 1:
    /*
     int y=10;
     int x=sizeof(int);
     printf("%d",x);
     */

  //Example 2:
    /*
    int a=5;
    short b;
    double c;
    char d;
    long e;
    int*ptr;
    printf ("\n line 1 \n Size of a = %d \n", sizeof(a));
    printf ("\n line 2 \n Size of b = %d \n", sizeof(b));
    printf ("\n line 3 \n Size of c = %d \n", sizeof(c));
    printf ("\n line 4 \n Size of d = %d \n", sizeof(d));
    printf ("\n line 5 \n Size of e = %d \n", sizeof(e));
    */

// Code 4: INPUTS. [scanf()]
    /*
    int x=10;
    int y= 0;
    printf("\nPlease insert a number!\n");
    scanf("%d",&y);
    //Note: Address var-> scanf("%d",&Var);
    printf("\nThe value inserted is %d\n",y);
    */

// Code 5: TASK 1.
    /*
    int X=0,Y=0;
    printf("\n Welcome\n Please Enter two numbers(X&Y)\n");
    printf("\n Enter X\n");
    scanf("%d",&X);
    printf("\n Enter Y \n");
    scanf("%d",&Y);
    long int A=X+Y,S=X-Y,M=X*Y; //A=ADD,S=SUB,M=Multi.
    float D=X/(float)Y, R=X%Y;    //D=Division,R=Reminder.
    printf("0-The Two Numbers are( %d and %d)\n", X,Y );
    printf("1- X= %d)\n",X );
    printf("2- Y= %d)\n",Y );
    printf("3- X+Y= %d)\n",A );
    printf("4- X-Y= %d)\n",S );
    printf("5- X*Y= %d)\n",M );
    printf("6- X/Y= %f)\n",D );
    printf("7- X%Y= %f)\n",R );
    printf("\n THANK YOU!\n");
    */

    return 0;
}
