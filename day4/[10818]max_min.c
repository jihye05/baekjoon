#include<stdio.h>

int main(){
    int n=0;
    int m[1000000]={0};
    int i=0, j=0, max=0, min=0;

    scanf("%d",&n); //정수의 개수 입력받음
    while(j<n){
        scanf("%d",&m[j]);
        j+=1;
    }
    max=m[0];
    min=m[0];
    while(i<n){
        if(max<m[i]){
            max=m[i];
        }
        if(min>m[i]){
            min=m[i];
        }
        i+=1;
    }
    printf("%d %d\n", min, max);
    return 0;
}