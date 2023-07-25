#include <stdio.h>
int main()
{
    double i;
    for (i = 0; i != 10; i += 0.1)
        printf("%.lf\n", i);
    //這個程序會爆內存
    return 0;
}