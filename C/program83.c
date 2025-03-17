//largest of all n numbers

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];      //can handel positive as well as negative values

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iMaximum = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    
    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of the array are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iMaximum = Maximum(ptr, iSize);

    printf("The maximum number is : %d\n", iMaximum);

    free(ptr);

    return 0;
}