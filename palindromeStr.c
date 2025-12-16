#include <stdio.h>
#include <string.h>

int palindrome(char str[], int i)
{
    int len = strlen(str);
    if (i >= len / 2)
        return 1;
    if (str[i] != str[len - i - 1])
        return 0;

    return palindrome(str, i + 1);
}

int main()
{
    char str[50];

    printf("Enter string: ");
    scanf("%s", str);
    if (palindrome(str, 0))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
