#include <stdio.h>
void reverseString(char s[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end) 
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char s[] = {'h','e','l','l','o'};
    int n = sizeof(s) / sizeof(s[0]);
    reverseString(s, n);
    for (int i = 0; i < n; i++) 
    {
        printf("%c ", s[i]);
    }

    return 0;
}