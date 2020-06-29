#include<stdio.h>
int main()
{
	int P,R,T,Si=0;
	printf("Enter Principle,rate & time for simple interest calculations \n");
	scanf("%d%d%d",&P,&R,&T);
	Si=(P*R*T)/100;
	printf("Simple interest is Rs %d\n",Si);
return 0;
}