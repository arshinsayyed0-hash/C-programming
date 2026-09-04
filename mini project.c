#include <stdio.h>

int main()
{
    char str[200];
    char *p;
    int words = 0;

    printf("Enter a sentence: ");
    gets(str);

    p = str;

    while (*p != '\0')
    {
        if (*p != ' ' && (p == str || *(p - 1) == ' '))
        {
            words++;
        }

        p++;
    }

    printf("Number of words = %d", words);

    return 0;
}