/// week11-4.cpp
/// leetcode 1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            int now = nums[i];

            int digits = 0;
            while(now>0){
                digits++;
                now = now / 10;
            }
            if(digits%2==0) ans++;
        }
        return ans;
    }
};
