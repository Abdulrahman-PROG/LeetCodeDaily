
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        count_0 = count_1 = count_2 = 0
        
        for num in nums:
            if num == 0:
                count_0 += 1
            elif num == 1:
                count_1 += 1
            elif num == 2:
                count_2 += 1
        
        for i in range(count_0):
            nums[i] = 0
        for i in range(count_0, count_0 + count_1):
            nums[i] = 1
        for i in range(count_0 + count_1, count_0 + count_1 + count_2):
            nums[i] = 2


