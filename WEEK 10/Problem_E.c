#include <stdio.h>
#include <string.h>

void asc(char name[ ][1001], int n)
{
    char temp[1001];
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if (strcmp(name[i], name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
}

void desc(char name[ ][1001], int n)
{
    char temp[1001];
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if (strcmp(name[i], name[j])<0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
}

int main(){

    int n;
    scanf("%d", &n);
    char name[n][1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }
    
    int x;
    scanf("%d", &x);

    if(x == 0)
    {
        asc(name,n);
    }
    else
    {
        desc(name,n);
    }

    for(int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
    
}