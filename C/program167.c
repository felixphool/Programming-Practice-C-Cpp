// Count number of z in the string 

#include<stdio.h>

int CountChar(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountChar(Arr);

    printf("Number of occurances of z are : %d\n", iRet);

    return 0;
}