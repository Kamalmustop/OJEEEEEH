#include <stdio.h>
#include <string.h>

int main()
{
    int T;

    scanf("%d", &T);

    char S[501];

    for (int i = 0; i < T; i++)
    {
        scanf("%s", S);
        int len = strlen(S);
        int isPalindrome = 1;
        for (int j = 0; j < len; j++)
        {
            if (S[j] != S[len - 1 - j])
            {
                isPalindrome = 0;
                break;
            }
        }

        if (isPalindrome)
        {
            printf("Case #%d: Yay, it's a palindrome\n", i+1);
        }
        else{
            printf("Case #%d: Nah, it's not a palindrome\n", i+1);
        }
    }

    return 0;
    
}