// Accept n numbers and count odd numbers

#include<stdio.h>       // IO
#include<stdlib.h>      // Memory Management

int OddCount(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCounter = 0;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iCounter++;
        }
    }
    return iCounter;
}

int main()              // Entry point function
{
    int iSize = 0;      // To store size of array
    int *ptr = NULL;    // To store address of array
    int iCnt = 0;       // Loop Counter
    int iRet = 0;

    // Step 1 : Accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    // Step 2 : Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    // Step 3 : Accept the values from user
    printf("Enter the elements : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    // Step 4 : Pass the array to the function
    iRet = OddCount(ptr, iSize);   // Demo(400,4)
    printf("Number of odd numbers is : %d", iRet);

    // Step 6 : Deallocate the memory of array
    free(ptr);

    return 0;               // Return success to OS
}