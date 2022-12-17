#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, P, s, Area,Perimeter;
  scanf("%f%f%f",&a,&b,&c);
  P = a + b + c;
  s = (a + b + c)/2;
  Area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("%.2f",Area);
}