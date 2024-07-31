class Solution(object):
    def removeElement(self, nums, val):
        # Runtime 11mS / Memory 11.53MB
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        nums[:] = (value for value in nums if value != val)
        k = len(nums)
        return k