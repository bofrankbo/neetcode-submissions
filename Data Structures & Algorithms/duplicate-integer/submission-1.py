class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        ans = False
        hash_set = set(nums)
        print(hash_set)
        
        if len(hash_set) < len(nums):
            ans = True


        return ans