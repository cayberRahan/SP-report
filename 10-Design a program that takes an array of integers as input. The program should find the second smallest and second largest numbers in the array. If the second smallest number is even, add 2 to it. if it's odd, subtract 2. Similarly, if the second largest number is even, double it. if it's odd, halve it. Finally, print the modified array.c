#include<stdio.h>
int main()
{
    int num[100],i,n;
    printf("How many numbers : ");
    scanf("%d",&n);

    printf("Enter Numbers : ");
     for(i=0;i<n;i++)

    {
        scanf("%d",&num[i]);
    }
    int max = num[0];

    for(i=0;i<n;i++)
    {
       if(max < num[i])
        max = num[i];

    }
    int max2 = num[1];

    for(i=0;i<n;i++)
    {
       if(max2 < num[i] && num[i]!=max)

        max2 = num[i];

    }
    printf("\n2nd largest Number is : %d\n",max2);


    int small = num[0];

    for(i=0;i<n;i++)
    {
       if(small > num[i])
       small = num[i];

    }
    int small2 = num[1];

    for(i=0;i<n;i++)
    {
       if(small2 > num[i] && num[i]!=small)

        small2 = num[i];

    }
    printf("\n2nd smallest Number is : %d\n",small2);


    if(small2%2==0)
    {
        small2=small2+2;
        printf("\nAfter adding 2 the 2nd smallest Number is : %d\n",small2);
    }
    else
    {
        small2=small2-2;
        printf("\nAfter Substract 2 the 2nd smallest Number is : %d\n",small2);
    }

    if(max2%2==0)
    {
        max2=max*2;
        printf("\nAfter double  the 2nd largest Number is : %d\n",max2);
    }
    else
    {
        float large2 = (float)max2/2;
        printf("\nAfter halve 2 the 2nd largest Number is : %.2f\n",large2);
    }

    getch();
}
