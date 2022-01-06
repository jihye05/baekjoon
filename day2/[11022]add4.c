#include<stdio.h>

int main(){
    int A=0, B=0;
    int T=0;

    scanf("%d",&T);
    for(int i = 1;i<=T;i++){
        scanf("%d %d",&A,&B);
        printf("Case #%d: %d + %d = %d\n",i,A,B,A+B);
    }

    return 0;
}