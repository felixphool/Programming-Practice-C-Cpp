// Copy contents from one string to another

#include<stdio.h>

void strcpyX(char *src, char *dest)     // It is actually an in built function but we are defining it
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    strcpyX(Arr,Brr);

    printf("String after copy is : %s\n", Brr);

    return 0;
}