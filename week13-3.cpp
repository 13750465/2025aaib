/// week13-3.cpp
/// 用 [輾轉相除法] 找答案
#include <stdio.h>
int gcd(int a, int b)
{
    printf("老大a: %d 老二b: %d\n", a, b);
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b, a%b);
}

int main()
{
    printf("請輸入2個數字(ex. 51 68)");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("他的最大公因數是:%d\n",ans);
}
