#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size;
   char *text = NULL;

   printf("Enter limit of the text: \n");
   scanf("%d", &size);

   text = (char *) malloc(size * sizeof(char));

   if (text != NULL)
   {
       printf("Enter some text: \n");
       scanf(" ");
       gets(text);

       printf("Inputted text is: %s\n", text);
   }

   free(text);
   text = NULL;
   return 0;
}
