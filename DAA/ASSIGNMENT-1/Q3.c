//3.	Convert uppercase string to lowercase using for loop.
#include<stdio.h>
void main()
{
    char str[] = "JAHNAVI";
    for(int i =0; str[i] != '\0';i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s in lowercase ",str);
}

