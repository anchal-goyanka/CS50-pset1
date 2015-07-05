#include <stdio.h>
#include <cs50.h>
int main (void)
{
printf("enter the no of steps\n");
int n;
do
{
 n = GetInt();
}
while (n 23);
for (int z = n-1; z > -1; z--)

{
for (int x= 1; x < z+1;x++)
{
printf(" ");
}
for (int y=1;y< n+1-z +1;y++)
{
printf ("#");
}
printf ("\n");
 
}



}
