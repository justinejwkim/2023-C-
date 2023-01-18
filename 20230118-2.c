#include<stdio.h>

int main(void) {
    int i, sum;
    i = 1;
    sum = 0;

    while ( i <= 10 ) {
            sum += i;
            i++;
    }
    printf("1부터 10까지의 합은 %d입니다 \n", sum);
    return 0;
}