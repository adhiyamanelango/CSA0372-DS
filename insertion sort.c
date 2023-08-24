#include <stdio.h>  
int main()  
{  
    int a[]={9,7,5,3,1,8,6,4,2},n=sizeof(a)/sizeof(a[0]),i,t,j;  
    for (i=1;i<n;i++){  
        t=a[i];  
        j=i-1; 
        while(j>=0&&t<=a[j])  
        {    
            a[j+1]=a[j];     
            j=j-1;    
        }    
        a[j+1]=t;    
    }  
    for(i=1;i<n;i++)  
        printf("%d ",a[i]);
    return 0;  
}    

