#include<stdio.h>
int main()
{
    float r,l,w,b,h;
    float C_A,R_A,T_A;

    printf("Enter radius : ");
    scanf("%f",&r);

    C_A = 3.1416*r*r;

    printf("\nArea of circle = %.2f\n",C_A);

    printf("\nEnter length : ");
    scanf("%f",&l);

    printf("Enter width : ");
    scanf("%f",&w);

    R_A = l*w;

    printf("\nArea of Rectangle = %.2f\n",R_A);


    printf("\nEnter base : ");
    scanf("%f",&b);

    printf("Enter height : ");
    scanf("%f",&h);


    T_A = 0.5*b*h;

    printf("\nArea of triangle = %.2f",T_A);

    getch();


}
