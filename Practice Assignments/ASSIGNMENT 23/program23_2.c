// Accept string from user and convert it into upper case.

// Input: "Marvellous Multi OS"
// Output: MARVELLOUS MULTI OS

#include<stdio.h>

void struprX(char *str)
{
    int gap = 'a' - 'A';
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            printf("%c" , (*str - gap));
        }
        else
        {
            printf("%c" ,*str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    struprX(Arr);

    return 0;
}