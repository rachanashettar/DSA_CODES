/*largest text line*/
#include<stdio.h>
void length(char s[10][100]);
void findMaxLength(int a[10]);

int main()
{
    char s[10][100];
    int i;
    printf("Enter 4 lines of text:\n");
    for(i = 0; i < 4; i++)
    {
        fgets(s[i], 100, stdin);
    }
    length(s);
    return 0;
}

void length(char s[10][100])
{
    int i, j, count[4];
    for(i = 0; i < 4; i++)
    {
        int c = 0;
        for(j = 0; s[i][j] != '\0'; j++)
        {
            c++;
        }
        count[i] = c-1;
        printf("The length of line %d is %d\n", i+1, count[i]);
    }
    findMaxLength(count);
}

void findMaxLength(int a[10])
{
    int i, max = a[0], line = 1;
    for(i = 1; i < 4; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            line = i;
        }
    }
    printf("The longest line is %d with length %d\n", line, max);
}
