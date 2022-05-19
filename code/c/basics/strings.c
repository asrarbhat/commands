#include<stdio.h>
#include<string.h>

int main()
{
	char ch=getchar();
	getchar();
	printf("%c\n",ch);
	char str[10];
	gets(str);
	printf("%s\n",str);
	printf("%d\n",strcmp("hello","hello"));
	return 0;
}
