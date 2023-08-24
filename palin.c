#include<stdio.h>
#include<string.h>
int main(){
	char n[10];
	printf("enter the string:");
	scanf("%s",&n);
	if(n==strrev(n))
	printf("palindrome");
	else
	printf("not palindrome");
	return 0;
}
