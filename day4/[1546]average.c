#include<stdio.h>

int main(){
    int n=0;
    int max=0;
    int x[1000]={0};
    double sum=0;
    double k=0;

    scanf("%d",&n);   //과목 개수

    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);  //각각 과목점수
    }
    max=x[0];
    for(int i=0;i<n;i++){
        if(max<x[i]) max=x[i];  // 과목의 최댓값구하기
    }

    for(int i=0;i<n;i++){
        k=(double)x[i]/max*100;
        sum = sum + k; //새로 조작한 평균 구하기
    }
    
    printf("%.1f\n",(sum/n));  // 조작된 평균 소수 첫재짜리까지 출력

    return 0;
}