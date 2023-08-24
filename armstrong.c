#include<stdio.h>
int main(){
	int n,r,t,i,s=0;
	printf("enter the number:");
	scanf("%d",&n);
	t=n;
	while(n>0){
		r=n%10;
		s+=(r*r*r);
		n=n/10;
	}
	if(s==t)
	printf("armstong number");
	else
	printf("not armstrong");
	return 0;
	
}

