//华氏度f转摄氏度c  c=5(f-32)/9
#include<stdio.h>
int main(){
    double f;
    scanf("%lf",&f); //
    printf("%.3f",5*(f-32)/9);
    return 0;
}