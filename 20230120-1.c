#include<stdio.h>
int main(void) {
    char ch;
    int N, i;
    scanf("%c %d", &ch, &N);
    for(i = 0;i < N;i++)
        printf(" %c", ch);
}