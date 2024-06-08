class Solution:
    def checkSubarraySum(self, nums: List[int], target: int) -> bool:
        cumulativeSumMod = 0
        modIndexMap = {0: -1}

        for index in range(len(nums)):
            cumulativeSumMod = (cumulativeSumMod + nums[index]) % target

            if cumulativeSumMod in modIndexMap:
                if index - modIndexMap[cumulativeSumMod] > 1:
                    return True
            else:
                modIndexMap[cumulativeSumMod] = index
                
        return False