//水仙花 ABC=A^3+B^3+C^3
#include<stdio.h>
#include<math.h>
int main(){
    int i=100;
    for(;i<=999;i++)
        if(i==pow((i/100),3)+pow((i/10)%10,3)+pow((i%10),3))
            printf("%d\n",i);
    return 0;
}