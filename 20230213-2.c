#include<stdio.h>
int main() {
    int N,i,cnt;
    scanf("%d",&N);
    while(N>0) {
        i=1;
        cnt=0;
        while(i<=N) {
            if(N%i==0)cnt++;
            i++;
        }
        printf("%d\n",cnt);
        scanf("%d",&N);
    }
}
