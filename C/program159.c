//accept name from user and print its lenght (in-built function)

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlen(Arr);

    printf("Length of string is : %d\n", iRet);

    return 0;
}