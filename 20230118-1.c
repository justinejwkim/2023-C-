#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N<0)
        printf("cold,indoor");
    if(0<=N&&N<40)
        printf("moderate,outdoor");
    if(N>=40)
        printf("hot,indoor");        
}