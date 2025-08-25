#include<stdio.h>

//Basic Input/Outputs using function

int q1()
{
    printf("Hello Students\n");
    return 0;
}
int q2()
{
    printf("Hello\nStudents\n");
    return 0;
}
int q3()
{
    printf("\"Krishnadev Mandal\"\n");
    return 0;
}
int q4()
{
    printf("\\n\n");
    return 0;
}
int q5()
{
    printf("\\r\n");
    return 0;
}
int q6()
{
    printf("\"Teacher's Day\"\n");
    return 0;
}
int q7()
{
    float a,b;
    printf("\nEnter two number for sum\n");
    scanf("%f%f",&a,&b);
    printf("Sum=%f\n",a+b);
    return 0;
}
int q8()
{
    float a;
    printf("\nEnter a number for square\n");
    scanf("%f",&a);
    printf("Square=%f\n",a*a);
    return 0;
}
int q9()
{
    float l,b;
    printf("\nEnter length and breadth\n");
    scanf("%f%f",&l,&b);
    printf("Area of rectangle=%f\n",l*b);
    return 0;
}
int q10()
{
    float r;
    printf("\nEnter radius of the circle\n");
    scanf("%f",&r);
    printf("Area of the circle=%f\n",3.14*r*r);
    return 0;
}
int main()
{
    q1();
    q2();
    q3();
    q4();
    q5();
    q6();
    q7();
    q8();
    q9();
    q10();
    return 0;
}
