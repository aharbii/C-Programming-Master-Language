/* Author: Jason Fedin
   Purpose:  This program is going to calculate the area of a rectangle
   */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   // declaring variables
   double width = atoi(argv[1]);
   double height = atoi(argv[2]);
   double perimeter = 0.0;
   double area = 0.0;

   // performing perimeter calculation
   perimeter = 2.0 * (height + width);
   area = width * height;

   // displaying input
   printf("Width is:  %.2f, Height is: %.2f, Perimeter is: %f\n", width, height, perimeter);
   printf("Area is: %f\n", area);

   return 0;
}
