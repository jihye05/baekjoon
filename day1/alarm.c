#include<stdio.h>

int main(){
    int H,M;
    int sum=0;

    scanf("%d %d", &H, &M);
    sum = H*60+M;
    sum -= 45;
    if(sum<0){
        sum=24*60+sum;
    }

    printf("%d %d",sum/60, sum%60);

    return 0;
}