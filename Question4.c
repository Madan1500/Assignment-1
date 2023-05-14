/*4. WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/
#include<stdio.h>
int main()
{float a,b;
printf("Enter the radius of the Circle: ");
scanf("%f",&a);
b=3.14*a*a;
printf("Area of circle is %f having the radius %f",b,a);
return 0;}
