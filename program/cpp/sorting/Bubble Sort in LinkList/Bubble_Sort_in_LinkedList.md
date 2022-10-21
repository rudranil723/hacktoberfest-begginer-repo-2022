# Bubble Sort in LinkedList
## **Sorting Algorithm**

**Bubble Sort** is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 

<br>

***

## **Algorithm**

In the algorithm given below, suppose **arr** is an array of **n** elements. The assumed **swap** function in the algorithm will swap the values of given array elements.


<br>

***

## **Working of Bubble Sort**
<br>

Now, let's see the working of Bubble sort Algorithm.

To understand the working of bubble sort algorithm, let's take an unsorted Linked list. We are taking a short and accurate Linked list, as we know the complexity of bubble sort is O(n2).

Let the elements of Linked List are -

![bubble-sort-algorithm1](https://user-images.githubusercontent.com/69354224/194344310-8d7a668c-7988-4438-b7d0-9e895b8b983a.png)

**First Pass**

Sorting will start from the initial two elements. Let compare them to check which is greater.

![bubble-sort-algorithm2](https://user-images.githubusercontent.com/69354224/194344371-6c79ae67-12ef-488a-a216-00e07b4b3b80.png)

Here, 32 is greater than 13 (32 > 13), so it is already sorted. Now, compare 32 with 26.

![bubble-sort-algorithm3](https://user-images.githubusercontent.com/69354224/194344436-ef9b3d63-a673-4296-bcc9-86c390b91725.png)

Here, 26 is smaller than 36. So, swapping is required. After swapping new Linked list will look like -

![bubble-sort-algorithm4](https://user-images.githubusercontent.com/69354224/194344515-9ce9aa92-678c-4b7b-97bb-a0d51c443a0a.png)

Now, compare 32 and 35.

![bubble-sort-algorithm5](https://user-images.githubusercontent.com/69354224/194344565-d337845f-06e3-48cc-85bc-bf98200d33d9.png)

Here, 35 is greater than 32. So, there is no swapping required as they are already sorted.

Now, the comparison will be in between 35 and 10.

![bubble-sort-algorithm6](https://user-images.githubusercontent.com/69354224/194344618-89aa7054-7602-48b4-89e0-b49339fce21c.png)

Here, 10 is smaller than 35 that are not sorted. So, swapping is required. Now, we reach at the end of the Linked list. After first pass, the array will be -

![bubble-sort-algorithm7](https://user-images.githubusercontent.com/69354224/194344679-eb770e55-f240-44e0-a721-afa3153f020c.png)

Now, move to the second iteration.

**Second Pass**

The same process will be followed for second iteration.

![bubble-sort-algorithm8](https://user-images.githubusercontent.com/69354224/194344834-0c2403dd-68d0-4a76-9636-0fbc15c91297.png)

Here, 10 is smaller than 32. So, swapping is required. After swapping, the Linked list will be -

![bubble-sort-algorithm9](https://user-images.githubusercontent.com/69354224/194344870-c40492a5-2f90-47e7-94f9-57ab0c3f1a77.png)

Now, move to the third iteration.

**Third Pass**

The same process will be followed for third iteration.

![bubble-sort-algorithm10](https://user-images.githubusercontent.com/69354224/194344920-00266592-414b-4c9d-a669-f67340f88f96.png)

Here, 10 is smaller than 26. So, swapping is required. After swapping, the Linked list will be -

![bubble-sort-algorithm11](https://user-images.githubusercontent.com/69354224/194344964-4a1afb34-a46f-490f-9dca-e6e708c8b223.png)

Now, move to the fourth iteration.
AD

**Fourth pass**

Similarly, after the fourth iteration, the array will be -

![bubble-sort-algorithm12](https://user-images.githubusercontent.com/69354224/194345011-be73905c-b3e7-4df2-815a-d304dc49e6b0.png)

Hence, there is no swapping required, so the Linked list is completely sorted.

<br>

***

## **Bubble Sort Complexity** 

<br>

1. **Time Complexity:** 

    | Case | Time Complexity|
    | ---- | -------------- |
    | Best Case | O(n) |
    | Average Case | O(n^2) |
    | Worst Case | O(n^2) |

    * **Best Case Complexity -** It occurs when there is no sorting required, i.e. the array is already sorted. The best-case time complexity of bubble sort is **O(n)**.
    * **Average Case Complexity -** It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. The average case time complexity of bubble sort is **O(n^2)**.
    * **Worst Case Complexity -** It occurs when the array elements are required to be sorted in reverse order. That means suppose you have to sort the array elements in ascending order, but its elements are in descending order. The worst-case time complexity of bubble sort is **O(n^2)**.

2. **Space Complexity:** 
    | Space Complexity | Stable|
    | ---- | -------------- |
    | O(1) | YES |

    * The space complexity of bubble sort is O(1). It is because, in bubble sort, an extra variable is required for swapping.
    * The space complexity of optimized bubble sort is O(2). It is because two extra variables are required in optimized bubble sort.

<br>

***

## **Important points to be noted:**

<br>

Bubble short is majorly used where -

* complexity does not matter
* simple and shortcode is preferred

Also, this algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

<br>

***

## **SAMPLE**

<br>

### **Code**

```cpp
//bubble sort iterative
#include <iostream>
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;

Node *takeinput()
{
	int data;
    cout<<"Before sorting array elements are -\n";
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}


void print(Node *head)
{
	Node *temp = head;
    cout<<"After sorting array elements are -\n";
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node *bubbleSort(Node *head)
{
	// Write your code here
    if(head==NULL) return head;
    Node* temp=head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }



   for(int i=0;i<n;i++){
            Node* curr=head;
   			Node* forward=head->next;
        while(temp!=curr->next){
            if(forward->data<curr->data){
                int a=curr->data;
                curr->data=forward->data;
                forward->data=a;
            }
            forward=forward->next;
            curr=curr->next;
        }
        temp=curr;
        
    }
   return head; 
   
}


int main()
{
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}
```
<br>

### **Output**

![bubble-sort-algorithm14](https://user-images.githubusercontent.com/69354224/194345111-e76df66e-10c8-4c8f-bb4b-58815c779e9d.png)
<br>

***
<br>

## **Resources:**
<br>

* [**CODINGNINJAS**](https://www.codingninjas.com/codestudio/library/bubble-sort-for-linked-list-by-swapping-nodes)
* [**GFG**](https://www.geeksforgeeks.org/bubble-sort-for-linked-list-by-swapping-nodes/)
