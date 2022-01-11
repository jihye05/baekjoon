#include<stdio.h>

int main(){
    int x[10]={0};
    int max=0;
    int num=0;

    for(int i=0;i<10;i++){
        scanf("%d",&x[i]);
    }
    
    for(int i=0;i<10;i++){
        if(max<x[i]){
            max=x[i];
            num=i;
        }
    }
    printf("%d\n%d\n",max,num+1);
    
    return 0;
}
