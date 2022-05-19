#include<stdio.h>

int main()
{
	FILE* fptr;
	fptr = fopen("abc.txt","r");
	char str[30];
	fscanf(fptr,"%[^\n]",str);
	printf("%s\n",str);
	return 0;
}
