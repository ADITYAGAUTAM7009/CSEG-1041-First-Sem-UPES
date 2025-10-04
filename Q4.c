//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
  int main()
  {
   float radius;
   printf("Enter radius");
   scanf("%f", &radius);
   printf("Area of circle is: %f", 3.14*radius*radius);
   return 0;
  }