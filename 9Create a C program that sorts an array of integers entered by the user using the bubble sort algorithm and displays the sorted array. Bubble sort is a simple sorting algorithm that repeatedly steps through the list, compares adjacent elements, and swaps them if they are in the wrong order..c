#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int b[size];
    printf("Enter %d elements: ",size);
    for (int i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }

    for (int i=0;i<size-1;i++)
        {
        for (int j=0;j<size-1-i;j++)
        {
            if (b[j]>b[j + 1])
             {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }

            }
        }


    printf("Sorted array: \n");
    for (int i=0;i<size;i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

   getch() ;

}
