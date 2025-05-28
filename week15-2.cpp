/// week15-2.cpp
///
/// 車牌重複數字的機率有多高
#include <stdio.h>
int helper(int n)
{
    int a[10] = {};
    while(n>0){
        int now = n%10;
        a[now]++;
        if(a[now]>1) return 1;
        n = n / 10;
    }
    return 0;
}

int main()
{
    int ans = 0;
    for(int i=0; i<=9999; i++){
        if( helper(i)==1 ) ans++;
    }
    printf("%d", ans);
}
