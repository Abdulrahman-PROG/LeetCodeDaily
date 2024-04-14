
class NumArray {
public:
    vector<int> PreSum;
    NumArray(vector<int>& nums) {
        PreSum.resize(nums.size() + 1); 
        PreSum[0] = 0; 
        for(int i = 0; i < nums.size(); i++) {
            PreSum[i+1] = PreSum[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return PreSum[right+1] - PreSum[left]; 
    }
};
