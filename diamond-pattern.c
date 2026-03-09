//
#include "diamond.h"
#include <stdio.h>
void printDiamond(int height)
{
for(int i=1; i<=height;i++)
{
for(int j=0;j<height-i;j++)
{
printf("`");
}
for(int k=0;k<2*i-1;k++)
{
printf("*");
}
for(int l=0;l<height-i;l++)
{
printf("`");
}
printf("\n");
}
for(int i = height - 1; i>=1;i--)
{
for(int j=0;j<height-i;j++)
{
printf("`");
}
for(int k=0;k<2*i-1;k++)
{
printf("*");
}
for(int l=0;l<height-i;l++)
{
printf("`");
}
printf("\n");
}
return;
}
