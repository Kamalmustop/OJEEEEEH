#include <stdio.h>
int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int X[N], Y[M];
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
        if(X[i]>max)
        {
            max = X[i];
        }
    }

    int win = 1;

    for(int i= 0; i < M; i++)
    {
        scanf("%d", &Y[i]);
        if(Y[i]>=max)
        {
            win = 0;
        }
    }
    if (win)
    {
        printf("The dark secret was true\n");
    }
    else
    {
        printf("Secret debunked\n");
    }

    return 0;

}