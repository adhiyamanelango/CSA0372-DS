#include <stdio.h>  
int main(){  
  int n,i,j,a[]={5,6,3,8,9,2,1,7,4};  
  n=sizeof(a)/sizeof(a[0]);    
  for(i=0;i<n-1;i++){  
    for(j=0;j<n-i-1;j++){  
      if (a[j]>a[j+1]){  
        int t=a[j];  
        a[j]=a[j+1];  
        a[j+1]=t;  
	}
  }
}
  printf("Sorted array: ");  
  for(i=0;i<n;i++){  
    printf("%d ",a[i]);  
  }  
  return 0;  
} 
