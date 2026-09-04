#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    char *p;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    p = str;

    while (*p != '\0')
    {
        if (isalpha(*p))
        {
            if (*p == 'a' || *p == 'e' || *p == 'i' ||
                *p == 'o' || *p == 'u' ||
                *p == 'A' || *p == 'E' || *p == 'I' ||
                *p == 'O' || *p == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        p++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}