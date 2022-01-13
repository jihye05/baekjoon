#include<stdio.h>

int self_num();

int main(){
    self_num();
    return 0;
}

int self_num(){
    int x[10000]={0};
    int no_self=0;

    for(int i=1;i<=10000;i++){
        if(i<10){
            no_self=i+i;
            x[no_self]=1;
        }else if(i<100){
            no_self=i+(i/10)+(i%10);
            x[no_self]=1;
        }else if(i<1000){
            no_self=i+(i/100)+((i%100)/10)+((i%100)%10);
            x[no_self]=1;
        }else if(i<10000){
            no_self=i+(i/1000)+((i%1000)/100)+(((i%1000)%100)/10)+(((i%1000)%100)%10);
            if(no_self<=10000)  x[no_self]=1;
        }
    }
    for(int j=1;j<=10000;j++){
        if(x[j] != 1) printf("%d\n",j);
    }

    return 0;
}


