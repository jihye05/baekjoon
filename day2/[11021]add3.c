#include<stdio.h>

int main(){
    int T;
    int A,B;

    scanf("%d",&T);
    for(int i = 1; i<=T;i++){
        scanf("%d %d",&A,&B);
        if(A>0 && B<10){
            printf("Case #%d: %d\n",i,A+B);
        }
    }
    return 0;
}