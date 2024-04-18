class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        onlyList = []
        for nums in matrix:
            for val in nums:
                onlyList.append(val)

        s = len(onlyList)
        l = 0
        r = s-1
        while(l <= r):
            mid = l + (r - l) // 2
            if onlyList[mid] == target:
                return True
            elif onlyList[mid] < target:
                l = mid + 1
            else :
                r = mid - 1
        return False