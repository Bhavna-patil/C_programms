#include<stdio.h>
int main()
{
    int i,j;
    printf("Prime number under 100:=\n");
    for(i=1;i<100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
    }
    return 0;
}