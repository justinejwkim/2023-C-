#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch (a) {
        case 1:case 3:case 9:
            printf("남성₩n");
            break;
        case 0:case 2:case 4:
            printf("여성₩n");
            break;
        default:
            printf("외국인₩n");   
    }
}