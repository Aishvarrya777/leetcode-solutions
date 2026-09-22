#include <stdio.h>
#include <string.h>

void reverseString(char s[], int size)
{
    int left = 0;
    int right = size - 1;
    char temp;

    while (left < right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    // Test Case 1: Typical case
    char str1[] = "hello";

    printf("Test Case 1:\n");
    reverseString(str1, strlen(str1));
    printf("%s\n", str1);

    // Test Case 2: Edge case with single character
    char str2[] = "a";

    printf("Test Case 2:\n");
    reverseString(str2, strlen(str2));
    printf("%s\n", str2);

    return 0;
}