// week04-1.c
// LeetCode 2579
long long coloredCells(int n) {
    long long ans = 0;
    for(long long i=1; i<n*2; i+=2){
        ans += i;
    }
    for(long long i=1; i<n*2-1; i+=2){
        ans += i;
    }
    return ans;
}
