class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        k = 0  # Initialize a counter for elements not equal to val
        
        # Iterate through nums
        for num in nums:
            # If the current element is not equal to val
            if num != val:
                # Move the element to the beginning of the list
                nums[k] = num
                k += 1  # Increment the counter
        
        return k  # Return the count of elements not equal to val
