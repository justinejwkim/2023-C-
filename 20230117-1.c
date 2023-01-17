#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    switch (x%7){
        case 0:
            printf("월요일₩n");
            break;
        case 1:
            printf("화요일₩n");
            break;
        case 2:
            printf("수요일₩n");
            break;
        case 3:
            printf("목요일₩n");
            break;
        case 4:
            printf("금요일₩n");
            break;
        case 5:
             printf("토요일₩n");
             break;
        case 6:
            printf("일요일₩n");
            break;
    }
}