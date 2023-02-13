
#include<stdio.h>
int main() {
    int N,tmp=0;
    scnaf(“%d”&N);
    while(  ) {
        tmp+=N%10;
        N/=10;
        tmp*=10;
    }
    tmp/=10;
    while(tmp>0) {
        printf("%d₩n",tmp%10);
        tmp/=10;
    }
}
