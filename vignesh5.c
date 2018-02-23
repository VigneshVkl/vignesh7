#include<stdio.h>
void main()
{
char t,hr,min;
printf("enter the min");
scanf("%c",&min);
hr=t/60;
min=t%60;
printf("%c:%c",hr,min);
return 0;
}
