#include <stdio.h>
int main()
{
    int val1, val2, result, ch;
    char choice;
    do
    {
        printf("enter any 2 no\n");
        scanf("%d%d", &val1, &val2);
        printf("enter 1 for add.\n 2for sub.\n 3 for mult.\n 4 for div");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            result = val1 + val2;
            printf("sum=%d", result);
            break;
        case 2:
            result = val1 + val2;
            printf("sub=%d", result);
            break;
        case 3:
            result = val1 * val2;
            printf("mult=%d", result);
            break;
        case 4:
            result = val1 / val2;
            printf("div=%d", result);
            break;

        default:
            printf("invalid choice\n");
        }
        printf("if you want to continue then enter 'y'");
        fflush(stdin);
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');
}