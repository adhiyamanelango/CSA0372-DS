#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	int i,j,n;
	printf("enter the string:");
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(s[i]>s[j]){
			
				char t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	printf("%s",s);
	
}
