class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int numZeroes = 0;
        int l = 0, r = 0;
        int res = 0;

        while(r < nums.size()){
            if(nums[r] == 0) numZeroes++;

            while(numZeroes > k && l < r){
                if(nums[l] == 0) numZeroes--;
                l++;
            }
            if(numZeroes <= k) res = max(res, r - l + 1);
            r++;
        }
        return res;
    }
};
