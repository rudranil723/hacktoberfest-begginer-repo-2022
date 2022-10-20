# First and Last Position of an Element In Sorted Array
# https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

# Problem Statement:
# You have been given a sorted array/list ARR consisting of 'N' elements. You are also given an integer 'K'. Now, your task is to find the first and last occurrence of 'K' in ARR.

# Note:
# 1. If 'K' is not present in the array, then the first and the last occurrence will be -1.
# 2. ARR may contain duplicate elements.
# For example, if ARR = [0, 1, 1, 5] and K = 1, then the first and last occurrence of 1 will be 1(0 Indexed) and 2.

# Input Format:
# The first line of input contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.
# The first line of each test case contains two single-space separated integers "N" and respectively.
# The second line of each test case contains single space-separated integers denoting the elements of the array/list ARR.

# Output Format:
# Return two single-space separated integers denoting the first and the last occurrence of 'K' in ARR, respectively.
# Note:
# You do not need to print anything; it has already been taken care of. Just implement the given function.

# Constraints:
# 1 <= T <= 100
# 1 <- N < 5000
# 0 < K <= 10^5
# 0 <= ARR[i] <= 10^5
# Time Limit: 1 second

# Sample Input 1:
# 2
# 6 3
# 0 5 5 6 6 6
# 8 2
# 0 0 1 1 2 2 2 2

# Sample Output 1:
# -1 -1
# 4 7

# Explanation Of Sample Output 1:
# For the first test case, 3 is not present in the array. Hence the first and last occurrence of 3 is -1 and -1.
# For the second test case, the first occurrence of 2 in at index 4 and last occurrence is at index 7.

# Sample Input 2:
# 2
# 4 0
# 0 0 0 0
# 1 2
# 2

# Sample Output 2:
# 0 3
# 0 0

class Solution(object):
    def searchRange(self, nums, target):
        res = [-1, -1]
        low = 0
        high = len(nums)
        while low < high:
            mid = int(low + (high-low)//2)
            if nums[mid] == target:
                high = mid
                res[0] = mid
                res[1] = mid
            elif nums[mid] < target:
                low = mid+1
            else:
                high = mid
        if res[0] == -1:
            return res
        low = res[0]+1
        high = len(nums)
        while low < high:
            mid = int(low + (high-low)//2)
            if nums[mid] == target:
                low = mid+1
                res[1] = mid
            elif nums[mid] < target:
                low = mid + 1
            else:
                high = mid
        return res


ob1 = Solution()
print(ob1.searchRange([2, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 6], 4))
