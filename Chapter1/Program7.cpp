//三位數反轉
//存儲值再輸出
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    m = (n%10)*100 + (n/10%10)*10 + (n/100);
    printf("%03d\n",m);
    printf("%\%d\n");
    return 0;
}