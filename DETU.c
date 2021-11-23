#include "stdio.h"
#include "string.h"
int main()
{
    char s[100];
    scanf("%s", s);
    int cnt = 0, i;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == '.')
            cnt++;
    }
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == '.' && s[i + 1] == '.')
            cnt--;
    }
    if (s[0] == '.' || s[strlen(s)] == '.' || s[0] == '.' && s[strlen(s)] == '.')
        cnt--;
    printf("%d", cnt);
}
