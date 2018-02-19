#include <stdio.h>
#include<conio.h>
void main()
{
    int i, j, k, count = 0;
    char str[50];
 
    printf("enter string\n");
    scanf("%[^\n]s", str);
    k = strlen(str);
    printf("prime characters in a string are\n");
    for (i = 2;i <= k;i++)
    {    
        count = 0;
        for (j = 2;j <= k;j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%c\n", str[i - 1]);
        }
    }
getch()
}
