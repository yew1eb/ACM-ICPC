class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        if n==1: 
            return 0
        res, can, lastcan = 0, 0, 0
        for i in range(n):
            if can >= n-1:
                break
            if i + nums[i] > can:
                if i > lastcan:
                    res = res + 1
                    lastcan = can
                can = i + nums[i]
        return res + 1