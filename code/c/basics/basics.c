#include<stdio.h> //needed to use some very important inbuilt functions.

long factorial(int);
int main(int argc, char* argv[])
{
	for(int i=1; i<argc; i++)//first one is the same of compiled file itself.
	{
		printf("%s \n", argv[i]);
	}// if you want to automatically run a program, that time command line arguments would be helpful.

	//loops
	for(int i=0;i<10;i+=2)
	{
		printf("%d \n",i);
	}

	int j=0;
	while(j<10)
	{
		printf("%d \n",j);
		j+=2;
	}

	int k=0;
	do{
		printf("%d \n",k);
		k+=2;
	}while(k<10);

	int m=9;
	if (m>8)
	{
		printf("m is greater than 8 \n");
	}
	else if( m<6)
	{
		printf("m is less than 6\n");
	}
	else
	{
		printf(" m is one of 6,7,8 \n");
	}

	//absolute values.
	int x=-3;
	x = x>0?x:-x;
	printf("%d\n",x);

	//functions
	for(int i=0;i<=10;i++)
	{
		printf("%ld\n",factorial(i));
	}

	//taking inputs 
	int s,r;
	scanf("%d %d",&s,&r);
	printf("%d %d\n",s,r);

	//primitive types
	char ch='a';
	short sh=3;
	int integer=33;
	long longer=43;
	float f=4.4;
	double dou=4.444;
	long double ld=3.3;
	printf("%c %d %d %ld %f %lf %Lf\n",ch,sh,integer,longer,f,dou,ld);
	return 0;
}

long factorial(int n)
{
	long result=1;
	for(int i=1;i<=n;i++) result*=i;
	return result;
}
