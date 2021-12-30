#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 150;
    int *pNum = NULL;

    pNum = &num;

    printf("num address is:  %p\n", &num);
    printf("Address of pNum: %p\n", &pNum);
    printf("value of the pNum: %p\n", pNum);
    printf("value of what pNum is pointing to: %d\n", *pNum);

    return 0;
}
