/*輸入 2 4 輸出：Case:0.42361
  輸入 65536 655360 輸出: Case:0.00001
  為什麼只有以下寫法可以，__int64不行；s+=(double)1/(i*i)不行 
  s必須是double類型，long double也不行*/

#include <stdio.h>
int main()
{
    int n, m; //<10^6做乘法會不會溢出？？
    double s = 0;
    int kase = 0;
    while (scanf("%d %d", &n, &m) == 2 && n != 0 && m != 0)
    {   
        kase++;
        s = 0;
        for (int i = n; i <= m; i++)
            s += ((double)1 / i) / i;
        printf("Case %d: %.5lf\n", kase, s);
    }
    return 0;
}
