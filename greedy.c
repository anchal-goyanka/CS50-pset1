#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main(void)
{
printf ("enter change amount\n");
float f;
do {
 f = GetFloat();
}
while (f < 0);

f = f * 100;
f = roundf(f);
int n = f;
int x = n%25;
int n1 = (n-x)/25;
int z = x %10;
int n2 = (x-z)/10;
int a = z %5;
int n3 = (z-a)/5;
int n4 = a;
int nt = n1 + n2 +n3 + n4;
printf("total no. is %d",nt);
}


