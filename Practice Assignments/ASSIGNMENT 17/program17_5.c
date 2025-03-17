// Accept number of rows and numbers ofcolumns from user and display below pattern.

// Input : iRow = 4       iCol = 4

// Output : 
// 1    2   3   4
// 2    3   4   5
// 3    4   5   6
// 4    5   6   7
     

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j, temp = 1;

    for (i = 1; i <= iRow; i++)
    {
        for (j = temp ; j < iCol+temp ; j++)
        {
            printf("%d\t", j);   
        }
        temp++;
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}