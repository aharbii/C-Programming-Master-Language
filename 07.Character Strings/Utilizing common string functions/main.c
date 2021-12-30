#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    char name[25][50], temp[25];
    int l, i, n, j;

    printf("\n\nPrint individual characters of string in reverse order :\n");
    printf("----------------------------------------------------------\n");
    printf("Input the string :");
    scanf("%s", str);

    l = strlen(str);

    printf("The characters of the string in reverse are : \n");

    for (i = l; i >=0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
    printf("----------------------------------------------------------");

    printf("\n\nSorts the strings of an array using bubble sort :  \n");
    printf("---------------------------------------------------------\n");

    printf("Input number of strings :");
    scanf("%d", &n);

    printf("Input string %d : \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    for(i=1;i<=n;i++)
        for(j=0;j<=n-i;j++)
            if(strcmp(name[j],name[j+1])>0)
            {
                strncpy(temp,name[j], sizeof(temp) - 1);
                strncpy(name[j],name[j+1], sizeof(name[j]) - 1);
                strncpy(name[j+1],temp, sizeof(name[j] + 1) - 1);
            }

    printf("The strings appear after sorting :\n");

    for (i = 0; i <= n; i++)
        printf("%s\n", name[i]);

    return 0;
}
