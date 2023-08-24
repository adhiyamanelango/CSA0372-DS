#include<stdio.h>
int main()
{
    int m[2][2],i,j,max=m[0][0];
    printf("Enter a matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            scanf("%d",&m[i][j]);
            if(max<m[i][j])
                max=m[i][j];
        }
    }
    printf("\nLargest Element = %d",max);
    return 0;
}

