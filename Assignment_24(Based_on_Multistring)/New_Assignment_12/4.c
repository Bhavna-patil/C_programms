#include<stdio.h>
int main()
{
    int i,j,row,k;
    printf("Enter rhe value of row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        k=1;
        for(j=1;j<=2*row-1;j++)
            j>=row+1-i&&j<=row+i-1?printf("%d",j<row?k++:k--): printf(" ");
        printf("\n");    
    }
    return 0;
}