#include<stdio.h>
#include<string.h>
int main()
{
char [20];
in i,num=0;
printf("/n enter the string");
scanf("%s",&str);
for(i=0;str[i]!=0;i++)
{
if(str>='1' && str<='9')
{
num=num+1;
}
printf("/n there are %s words in the words",num);
getch();
return 0;
}
}
