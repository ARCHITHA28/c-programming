#include<stdio.h>
struct comp
{
float r1;
float img;
}c1,c2;
int main()
{
printf("\n enter real and imaginary part of first number:");
scanf("%d%d",&c1.r1,&c1.img);
printf("\n enter real and imaginary part of second number:");
scanf("%d%d",&c2.r1,&c2.img);
printf("\n the first number is %f+i%f",c1.r1,c1.img);
printf("\n the second number is %f+i%f",c2.r1,c2.img);
printf("\n the result : %f+i.f",(c1.r1+c2.r1),(c1.img+c2.img));
return 0;
}

