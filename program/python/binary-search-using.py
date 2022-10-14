# Python code to implement binary search
# on Singly Linked List

# Link list node
class Node:
	
	def __init__(self, data):
		self.data = data
		self.next = None
		self.prev = None
		
def newNode(x):

	temp = Node(0)
	temp.data = x
	temp.next = None
	return temp

# function to find out middle element
def middle(start, last):

	if (start == None):
		return None

	slow = start
	fast = start . next

	while (fast != last):
	
		fast = fast . next
		if (fast != last):
		
			slow = slow . next
			fast = fast . next
		
	return slow

# Function for implementing the Binary
# Search on linked list
def binarySearch(head,value):

	start = head
	last = None

	while True :
	
		# Find middle
		mid = middle(start, last)

		# If middle is empty
		if (mid == None):
			return None

		# If value is present at middle
		if (mid . data == value):
			return mid

		# If value is more than mid
		elif (mid . data < value):
			start = mid . next

		# If the value is less than mid.
		else:
			last = mid

		if not (last == None or last != start):
			break

	# value not present
	return None

# Driver Code

head = newNode(1)
head.next = newNode(4)
head.next.next = newNode(7)
head.next.next.next = newNode(8)
head.next.next.next.next = newNode(9)
head.next.next.next.next.next = newNode(10)
value = 7
if (binarySearch(head, value) == None):
	print("Value not present\n")
else:
	print("Present")
	
# This code is contributed by Arnab Kundu
