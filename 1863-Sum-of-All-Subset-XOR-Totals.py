from typing import List

class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        n = len(nums)
        total_subsets = 1 << n  # 2^n
        
        xor_sum = 0
        
        for subset_mask in range(total_subsets):
            subset_xor = 0
            for j in range(n):
                if subset_mask & (1 << j):
                    subset_xor ^= nums[j]
            xor_sum += subset_xor
        
        return xor_sum