#include<stdio.h>

int hansoo();

int main(){
    int n=0,result=0;
    scanf("%d",&n);
    result = hansoo(n);
    printf("%d",result);
    return 0;
}

int hansoo(int n){
    int gap1, gap2;
    int count=0;

    for(int i=1;i<=n;i++){
        if(i<100){
            count+=1;
        }else if(i<1000){
            gap1=(i/100)-((i%100)/10);
            gap2=((i%100)/10)-((i%100)%10); 
            if(gap1==gap2) {
                count+=1;
            }
        }
    }
    
    return count;
}