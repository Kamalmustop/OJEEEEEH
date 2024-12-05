#include <stdio.h>
#include <string.h>
int main() {
    int n_cases;
    scanf("%d", &n_cases);
    for (int case_num = 1; case_num <= n_cases; case_num++)
    {
    char text[1001];
    int n_queries;
    scanf("%s", text);
    scanf("%d", &n_queries);
        for (int i = 0; i < n_queries; i++)
        {
        char ch1, ch2;
        scanf(" %c %c", &ch1, &ch2);
        for (int j = 0; j < strlen(text); j++)
        {
            if (text[j] == ch1) {
                    text[j] = ch2;
        }
        }
        }
    printf("Case #%d: %s\n", case_num, text);
    }
    return 0;
}