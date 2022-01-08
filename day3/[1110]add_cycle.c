#include<stdio.h>

int main(){
    int n;
    int x=0,y=0,k=0;
    int count=0;
    scanf("%d",&n);

    while(1){
        if(n<10) x=0; 
        x=n/10;
        y=n%10;
        k=10*y+(x+y)%10;
        if(n==k)break;
        count+=1;
        n=k;
    }
    printf("%d",count);
    return 0;
}