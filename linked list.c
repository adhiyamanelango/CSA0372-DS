#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int a[100];
int create(){
	int n,i;
	printf("enter no.element:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
printf("created successfully");
return n;
}
int display(int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int search(int n){
	int i,s;
	printf("enter the element to search:");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(a[i]==s){
		printf("%d",i+1);
		return i;
	}
	}
	printf("not found");
	}
int rev(int n){
	int i;
	for(i=n-1;i>0;i--){
		printf("%d",a[i]);
	}
}
int count(int n){
	int i,c=0;
	for(i=0;i<n;i++){
		c++;
	}
printf("%d",c);
}
int insert(int n,int a[])
{
 int i,v,p;
 printf("Enter the value to insert:");
 scanf("%d",&v);
 printf("Enter the pos:");
 scanf("%d",&p);
 printf("element inserted");
 for(i=n-1;i>=p-1;i--)
 {
  a[i+1]=a[i];
 }
 a[p-1]=v;
 n++;
 return n;
}
int del(int n,int a[]){
 int i,s;
 s=search(n);
 printf("\nelement deleted");
 for(i=s;i<n-1;i++)
 {
  a[i]=a[i+1];
 }
 n--;
 return n;
}

void main()
{
	int c,l;
	do{
		printf("\n1.create 2.display 3.reverse 4.search 5.count 6.insert 7.delete 8.exit");
		printf("\nenter the option:");
		scanf("%d",&c);
		switch(c){
			case 1:
				l=create();
				break;
			case 2:
				l=display(l);
				break;
			case 3:
				l=rev(l);
				break;
			case 4:
				l=search(l);
				break;
			case 5:
				l=count(l);
				break;
			case 6:
				l=insert(l,a);
				break;
			case 7:
				l=del(l,a);
				break;
			case 8:
				exit(0);
		}
	}while(c<8);
	getch();
}
