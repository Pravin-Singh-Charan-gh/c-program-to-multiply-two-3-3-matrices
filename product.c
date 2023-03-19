#include <stdio.h>
void main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter elements of 1st 3*3 matrix(row wise):");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    printf("Enter elements of 2nd 3*3 matrix(row wise):");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&b[i][j]);
    int c[3][3],k;
    printf("Product of Matrix A and Matrix B:-\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            c[i][j]=0;
            for(k=0; k<3; k++)
                c[i][j]+=(a[i][k])*(b[k][j]);
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
