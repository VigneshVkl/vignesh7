#include<stdio.h>
int main()
{
int X,Y;
printf("/n enter the two number");
scanf("%d%d",&X,&Y);
X=X+Y;
Y=X-Y;
X=X-Y;
printf(" the swapped numbers are:%d\t%d");
getch();
return 0;
}
