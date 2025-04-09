// week08-1
// LeetCode 3375. Minimum Operations to Make Array Values Equal to K
//¼Æ¦r¥u¦³1...100
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101] = {};
        int N = nums.size();
        for(int i=0; i<N; i++){
            int now = nums[i];
            if(now<k) return -1;
            a[now]++;
        }
        int ans = 0;
        for(int now=k+1; now<=100; now++){
            if(a[now]>0) ans++;
        }
        return ans;
    }
};
