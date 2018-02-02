#include<stdio.h>
#include<stdlib.h>
 
void main()
{
    FILE *fp;
    char ch;
    int character = 0, space = 0, tab = 0, line = 0;
    fp = fopen("/home/tusharsoni/Desktop/TestFile","r");
    if(fp == NULL)
    {
        printf("File Not Found\n");
        exit(1);
    }
    else
    {
        while(1)
        {
            ch = fgetc(fp);
            if(ch == EOF)   
            {
                break;
            }
            character++;
            if(ch == ' ')
                space++;
            else if(ch == '\t')
                tab++;
            else if(ch == '\n')
                line++;
        }
    }
    fclose(fp);
    printf("\nNumber of Characters = %d\n", character);
    printf("\nNumber of Tabs       = %d\n", tab);
    printf("\nNumber of New Lines  = %d\n", line);
    printf("\nNumber of Spaces     = %d\n", space);
 
}
    
