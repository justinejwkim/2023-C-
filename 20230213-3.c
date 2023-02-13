#include<stdio.h>
int main(){
    int N,tmp=0;
    scanf("%d",&N);
    while(N>0) {
        tmp=N;
        tmp*=10;
        scanf("%d",&N);
        while(N>0) {
            tmp+=N;
            tmp*=10;
            scanf("%d",&N);
        }
        printf("%d₩n",tmp/ 10);
        scanf("%d",&N);
    }
}
