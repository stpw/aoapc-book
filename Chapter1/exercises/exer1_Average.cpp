#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c); //异常输入怎么处理呢？？
    printf("%.3f",(a+b+c)/3.0);
    return 0;
}