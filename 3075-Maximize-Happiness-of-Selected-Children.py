class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        happiness.sort(reverse=True)
        turns,ans = 0,0
        i=0
        
        while k and i<len(happiness):
            ans+=max(happiness[i]-turns,0)
            k-=1
            turns+=1
            i+=1
            
        return ans
            
        
            
            
            