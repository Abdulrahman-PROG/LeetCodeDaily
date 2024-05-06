class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l =0, r = n-1,mn=1000000;
        int mid;
        while(l < r){
            mid = l + (r-l) / 2;
            mn = min(mn,nums[mid]);
            // right has the min 
            if (nums[mid] > nums[r]) l = mid+1;
            // left has the min
            else r = mid -1;
        }
        return min(mn,nums[l]);
    }
};