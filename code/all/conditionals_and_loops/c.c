#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if (n==3)
	{
		printf("it is three \n");
	}
	else if (n>3)
	{
		printf("it is greater than three \n");
	}
	else
	{
		printf("it is less than three\n");
	}

	for(int i=0;i<n;i++) printf("%d\n",i);
	int j=0;
	while(j<n)
	{
		printf("%d\n",j);
		j++;
	}

	int k=0;
	do{
		printf("%d\n",k);
		k++;
	} while(k<n);
	return 0;
}
