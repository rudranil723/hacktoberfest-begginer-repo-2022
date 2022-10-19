# Search in a rotated sorted array

# https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554

# Consider arr[] = {3, 4, 5, 1, 2}, key = 1

# Pivot finding:

# low = 0, high = 4:
#    mid = 2
#    arr[mid] = 5, arr[mid + 1] = 1
#    arr[mid] > arr[mid + 1],
#    Therefore the pivot = mid = 2

# Array is divided into two parts {3, 4, 5}, {1, 2}
# Now, according to the conditions and the key, we need to find in the part {1, 2}

# Key Finding:

# We will apply Binary search on {1, 2}.
# low = 3, high = 4.
# mid = 3
# arr[mid] = 1, key = 1, hence arr[mid] = key matches.
# The required index = mid = 3

# So the element is found at index 3.

# Searches an element key in a pivoted sorted array arr_p[] of size n
def pivotedBinarySearch(arr, n, key):

    pivot = findPivot(arr, 0, n-1)

    # If we didn't find a pivot,
    # then array is not rotated at all
    if pivot == -1:
        return binarySearch(arr, 0, n-1, key)

    # If we found a pivot, then first
    # compare with pivot and then
    # search in two sub arrays around pivot
    if arr[pivot] == key:
        return pivot
    if arr[0] <= key:
        return binarySearch(arr, 0, pivot-1, key)
    return binarySearch(arr, pivot + 1, n-1, key)


# Function to get pivot. For array
# 3, 4, 5, 6, 1, 2 it returns 3
# (index of 6)
def findPivot(arr, low, high):

    # base cases
    if high < low:
        return -1
    if high == low:
        return low

    # low + (high - low)/2;
    mid = int((low + high)/2)

    if mid < high and arr[mid] > arr[mid + 1]:
        return mid
    if mid > low and arr[mid] < arr[mid - 1]:
        return (mid-1)
    if arr[low] >= arr[mid]:
        return findPivot(arr, low, mid-1)
    return findPivot(arr, mid + 1, high)

# Standard Binary Search function


def binarySearch(arr, low, high, key):

    if high < low:
        return -1

    # low + (high - low)/2;
    mid = int((low + high)/2)

    if key == arr[mid]:
        return mid
    if key > arr[mid]:
        return binarySearch(arr, (mid + 1), high, key)

    return binarySearch(arr, low, (mid - 1), key)


# Driver program to check above functions
# Let us search 3 in below array
if __name__ == '__main__':
    arr1 = [5, 6, 7, 8, 9, 10, 1, 2, 3]
    n = len(arr1)
    key = 3
    print("Index of the element is : ",
          pivotedBinarySearch(arr1, n, key))
