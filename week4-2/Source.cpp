#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    int i, j,n, x,c = 1;
    char a = 'A';

    printf("Input number  : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (x = 1; x <= n - i; x++)

            printf("  ");
        for (j = 0; j <= (c / 2); j++) {
            printf("%c ", a++);
        }

        a = a - 2;

        for (j = 0; j < (c / 2); j++) {
            printf("%c ", a--);
        }
        c = c + 2;
        a = 'A';
        printf("\n");
    }
}
