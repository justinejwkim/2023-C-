#include<stdio.h>
int main()
{
    int a, result;
    scanf("%d", &a);
    switch(a) {
        case 0:case 3:case 4:case 7:
            printf("13 *13₩n");
            scanf("%d", &result);
            if (result == 169) printf("맞음₩n");
            else printf("틀림₩n");
            break;
        case 1:case 2:case 9:
            printf("17 *17₩n");
            scanf("%d", &result);
            if (result == 289) printf("맞음₩n");
            else printf("틀림₩n");
            break;
        case 5:case 6:case 8:
            printf("19 * 19₩n");
            scanf("%d", &result);
            if (result == 361) printf("맞음₩n");
            else printf ("틀림₩n"); 
            break;
        default:
            printf("none₩n");              
    }
}