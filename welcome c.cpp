//simple interest using for loop
#include<stdio.h>
int main(){
	int p,t,r,i=1;
	printf("enter principle,time,rate:");
	for(i=1;i<=5;i++)
	scanf("%d%d%d",&p,&t,&r);
	printf("simple interest=%d",p*t*r/100);
	return 0;
}
