#include<stdio.h>
int main()
{
int a,b;
printf("/nenter the two numbers");
scanf("%d%d",&a,&b);
printf("\n a=%d\nb=%d");
a=a^b;
b=a^b;
a=a^b;
printf("/n after swapping")
printf("/n a-%d/nb=%d);
getch();
return 0;
}
