//7744問題，返回aabb型4位完全平方數
#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    for(a=1;a<=9;a++)
        for(b=1;b<=9;b++)
        {
            int m = 1100*a+11*b;
            int n = floor(sqrt(m)+0.5);
            if(m==n*n) printf("%d\n",m);
        }  
    return 0;  
}