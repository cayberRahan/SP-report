#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter Any Positive Number : ");
    scanf("%d",&n);

    while(n<0)
    {
        printf("Error!!It is a negative number\n");

        printf("Enter Any Positive Number : ");
        scanf("%d",&n);
    }


    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d\n",fact);

    getch ();
}

