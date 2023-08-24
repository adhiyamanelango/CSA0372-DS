 #include <stdio.h>
    void main ()
    { 
        int a[10][10],i,j,m,n,c=0,r=0; 
        printf("Enter the order of the matrix:\n");
        scanf("%d %d",&m,&n); 
        printf("Enter the elements of the matrix:\n");
        for (i=0;i<m;i++)
        {
            for(j=0;j<n;j++) 
            {
                scanf("%d",&a[i][j]);
            }
        } 
        for(i=0;i<m;i++) 
        {
            for(j=0;j<n;j++) 
            {
                r+=a[i][j] ;
                c+=a[j][i];
            } 
            printf("Sum of the %d row is = %d\n",i+1,r);
            printf("Sum of the %d column is = %d\n",i+1,c);
            r=0; 
            c=0;
        }
    }
