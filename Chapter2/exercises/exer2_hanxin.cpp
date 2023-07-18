/* N between 10 and 100
   a <3, b<5, c<7
   //丑陋的代码
*/
#include<stdio.h>
int main(){
    int a,b,c,kase=0;
    while (scanf("%d%d%d",&a,&b,&c)==3)
    {
        /* code */
        kase++;
        for(int N=10;N<=100;N++){
            if((N-a)%3==0&&(N-b)%5==0&&(N-c)%7==0){
                printf("Case %d: %d\n",kase,N);//輸出總人數最小值或無解
                break;
            }
            if(N==100)
                printf("Case %d: No answer\n",kase);
        }    
    }
    return 0;
}