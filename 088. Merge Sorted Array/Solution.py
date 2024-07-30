class Solution(object):
    def merge(self, nums1, m, nums2, n):
        # Runtime 19mS / Memory 11.63MB
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        k = 0
        numstmp = nums1
        for i in range(m+n):
            if k < m:
                numstmp[i] = nums1[k]
                k+=1
            else:
                numstmp[i] = nums2[k-m]
                k+=1
        nums1 = numstmp.sort()