#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            printf("Yes");
        }
        else
        {
            if (year % 400 == 0)
            {
                printf("Yes");
            }
            else
            {
                printf("No");
            }
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}