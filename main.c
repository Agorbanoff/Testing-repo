#include <stdio.h>
int main()
{
    char y;
    do
    {
        printf("y=? \n");
        scanf("%c",&y);
    }
    while (y < 'a' || y > 'z');
        y=y-'a';
        y=y+'A';
    printf("%c", y);
    return 0;
}
