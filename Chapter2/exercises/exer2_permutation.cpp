#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i;
    for(int j=123;j<=329;j++){
        a = j/100;
        b = (j/10)%10;
        c = j%10;
        d = (2*j)/100;
        e = ((2*j)/10)%10;
        f = (j*2)%10;
        g = (3*j)/100;
        h = ((3*j)/10)%10;
        i = (j*3)%10;
        //printf("%d%d%d%d%d%d%d%d%d\n",a,b,c,d,e,f,g,h,i);
        if((a+b+c+d+e+f+g+h+i)==45&&(a*b*c*d*e*f*g*h*i)==362880)
            printf("%d %d %d\n",j,2*j,3*j);
    }
    return 0;
}