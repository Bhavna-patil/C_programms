#include<stdio.h>
int main()
{
    int m;
    printf("Enter munth number");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
            printf("31 Days");
            break;
        case 2:
            printf("28or 29 Days");
            break;
        case 3:
            printf("31 Days");
            break;
        case 4:
            printf("30 Days");
            break;
        case 5:
            printf("31 Days");
            break;
        case 6:
            printf("30 Days");
            break;
        case 7:
            printf("31 Days");
            break;
        case 8:
            printf("31 Days");
            break;
        case 9:
            printf("30 Days");
            break;
        case 10:
            printf("31 Days");
            break;
        case 11:
            printf("30 Days");
            break;
        case 12:
            printf("31 Days");
            break;
        default:
            printf("Invalied munth number");                                                
    }
    return 0;
}