#include <stdio.h>
#include <string.h>
void main()
{
    char a[10];
    int i, j,k,l;
    int c;

    printf("Enter a word with charecter less than 10:");
    scanf("%c", &a[10]);
    printf("Enter the number of charecters you entered ");
    scanf("%d", &c);
    switch (c)
    {
    case 2:
        for (i = 0; i < 10; i++)
        {
            printf("%c/t/t", a[i]);
            for (j = 0; j < 10; j++)
            {
                printf("%c/n", a[j]);
                for (k = 1; k < 10; k--)
                    ;
                {
                    printf("%c/t/t", a[k]);
                    printf("%c");
                }
            }
        }
        break;

    case 3:
        for (i = 0; i < 10; i++)
        {
            printf("%c/t/t/t", a[i]);
            for (j = 0; j < 10; j++)
            {
                printf("%c/n", a[j]);
                for (k = 1; k < 10; k--)
                    ;
                {
                    printf("%c", a[k]);
                    printf("%c/t");
                }
            }
        }
        break;

    case 4:
        for (i = 0; i < 10; i++)
        {
            printf("%c/t/t/t/t", a[i]);
            for (j = 0; j < 10; j++)
            {
                printf("%c/n", a[j]);
                for (k = 1; k < 10; k--)
                    ;
                {
                    printf("%c", a[k]);
                    printf("%c/t/t");
                }
            }
        }
        break;

    case 5:
        for (i = 0; i < 10; i++)
        {
            printf("%c/t/t/t/t/t", a[i]);
            for (j = 0; j < 10; j++)
            {
                printf("%c/n", a[j]);
                for (k = 1; k < 10; k--)
                    ;
                {
                    printf("%c", a[k]);
                    printf("%c/t/t/t");
                }
            }
        }
        break;

    case 6:
        for (i = 0; i < 10; i++)
        {
            printf("%c/t/t/t/t/t/t", a[i]);
            for (j = 0; j < 10; j++)
            {
                printf("%c/n", a[j]);
                for (k = 1; k < 10; k--)
                    ;
                {
                    printf("%c", a[k]);
                    printf("%c/t/t/t/t");
                }
            }
        }
        break;

    case 7:
        for (i = 0; i < 10; i++)
        {
            printf("%c/t/t/t/t/t/t/t", a[i]);
            for (j = 0; j < 10; j++)
            {
                printf("%c/n", a[j]);
                for (k = 1; k < 10; k--)
                    ;
                {
                    printf("%c", a[k]);
                    printf("%c/t/t/t/t/t");
                }
            }
        }
        break;

    case 8:
        for (i = 0; i < 10; i++)
        {
            printf("%c/t/t/t/t/t/t/t/t", a[i]);
            for (j = 0; j < 10; j++)
            {
                printf("%c/n", a[j]);
                for (k = 1; k < 10; k--)
                    ;
                {
                    printf("%c", a[k]);
                    printf("%c/t/t/t/t/t/t");
                }
            }
        }
        break;

    case 9:
        for (i = 0; i < 10; i++)
        {
            printf("%c/t/t/t/t/t/t/t/t/t", a[i]);
            for (j = 0; j < 10; j++)
            {
                printf("%c/n", a[j]);
                for (k = 1; k < 10; k--)
                    ;
                {
                    printf("%c", a[k]);
                    printf("%c/t/t/t/t/t/t/t");
                }
            }
        }
        break;

    case 10:
        for (i = 0; i < 10; i++)
        {
            printf("%c/t/t/t/t/t/t/t/t/t/t", a[i]);
            for (j = 0; j < 10; j++)
            {
                printf("%c/n", a[j]);
                for (k = 1; k < 10; k--)
                    ;
                {
                    printf("%c", a[k]);
                    printf("%c/t/t/t/t/t/t/t/t");
                }
            }
        }
        break;

        
        default:
        break;
    }
}