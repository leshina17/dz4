#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b,&c);
    int max,min,p;
    max=c;
    if (a>c)
        max=a;
    if (max<b)
        max=b;
    min=b;
    if (a<b)
        min=a;
    if (min>c)
        min=c;
    if ((max*max)>((min*min)+((a+b+c-max-min)*(a+b+c-max-min))))
         p=1;
    if ((max*max)==((min*min)+((a+b+c-max-min)*(a+b+c-max-min))))
         p=2;
    if ((max*max)<((min*min)+((a+b+c-max-min)*(a+b+c-max-min))))
         p=3;
    switch(p){
        case 1: printf("tupou"); break;
        case 2: printf("pryamoi"); break;
        case 3: printf("ostrei"); break;
        default: printf("error");
    }
    return 0;
}