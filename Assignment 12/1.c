#include<stdio.h>
void printN(int);
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printN(n);
    return 0;
}

void printN(int n)
{
    if(n>1)
    printN(n-1);
    printf("%d ",n);
}