#include<stdio.h>

int main(){
    int n=0;
    int max=0;
    int x[1000]={0};
    double sum=0;
    double k=0;

    scanf("%d",&n);   //���� ����

    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);  //���� ��������
    }
    max=x[0];
    for(int i=0;i<n;i++){
        if(max<x[i]) max=x[i];  // ������ �ִ񰪱��ϱ�
    }

    for(int i=0;i<n;i++){
        k=(double)x[i]/max*100;
        sum = sum + k; //���� ������ ��� ���ϱ�
    }
    
    printf("%.1f\n",(sum/n));  // ���۵� ��� �Ҽ� ù��¥������ ���

    return 0;
}