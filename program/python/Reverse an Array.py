# Reverse The Array
# https: // www.codingninjas.com/codestudio/problems/reverse-the-array_1262298

# Problem Statement:
# Given an array list 'ARR' of integers and a position "M". You have to reverse the array after that position.

# Example:
# We have an array ARR(1, 2, 3, 4, 5, 6) and M = 3, considering 0 based indexing so the
# sub_array(5, 6) will be reversed and our output array will be(1, 2, 3, 4, 6, 5}.

# Input Format:
# The very first line of input contains an integer 'T' denoting the number of test cases.
# The first line of every test case contains one integer 'N' where 'N' denotes the number of elements and an integer 'M' which denotes after which position the array has to be reversed.
# The second line of every test case contains 'N' space-separated integers which denote the elements of input of array/list.

# Output Format:
# For each test case, return the required array.
# Output for each test case is printed on a separate line.

# Note:
# You do not need to print anything, it has already been taken care of. Just implement the given function.
# Consider 0-based indexing of the array.

# Constraints:
# 1 <= T <= 10
# 0 <= M <= N <= 5*10 ^ 4
# -10 ^ 9 <= ARR[i] <= 10 ^ 9
# Time Limit: 1 sec

# Sample Input 1:
# 2
# 6 3
# 1 2 3 4 5 6
# 5 2
# 1 0
# 9 8 7 6

# Sample Output 1:
# 1 2 3 4 6 5
# 10 9 8 6 7

# Explanation 1:
# For the first test case,
# Considering e-based indexing we have M = 3 so the sub_array[M+1 - N-1] has to be reversed.
# Therefore the required output will be(1, 2, 3, 4, 6, 5}.
# For the second test case,
# Considering 0-based indexing we have H 2 so the sub_array[H+1 N-1] has to be reversed.
# Therefore the required output will be(18, 9, 8, 6, 7).

# Sample Input 2:
# 2
# 7 3
# 1 4 5 6 6 7 7
# 9 3
# 10 4 5 2 3 6 1 3 6

# Sample Output 2:
# 1 4 5 6 7 7 6
# 10 4 5 2 6 3 1 6 3

# Iterative python program to reverse an array
# Function to reverse A[] from start to end

def reverseList(A, start, end):
    while start < end:
        A[start], A[end] = A[end], A[start]
        start += 1
        end -= 1


# Driver function to test above function
A = [1, 2, 3, 4, 5, 6]
print(A)
reverseList(A, 0, 5)
print("Reversed list is")
print(A)
