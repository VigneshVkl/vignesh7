#include<stdio.h>
#include<string.h>
int main()
{
	char str[200];
	int i,line=0;
	printf("/nenter the paragraph");
	scanf("%s",&str);
	for(i=0;i!=str;i++)
	{
		if(str[i]=='.')
		line=line+1;
	}
	printf("/n the no of lines in the paragraphis %s",line);
	return 0;
}
