/* Simple Heap Sort Program Using Functions and Array in C++*/
/* Data Structure C++ Programs,C++ Functions and Array Examples */

#include <iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 5

using namespace std;

void heap_sort();

void heap_adjust(int, int);
int arr_sort[MAX_SIZE], t, a;

int main() {
    int i;

    cout << "Simple C++ Heap Sort Example - Functions and Array\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Sorting : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_sort[i];

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    heap_sort();

    cout << "\n\nSorted Data :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    getch();

}

void heap_sort() {
    for (int i = MAX_SIZE / 2 - 1; i >= 0; i--)
        heap_adjust(MAX_SIZE, i);

    for (int i = MAX_SIZE - 1; i >= 0; i--) {
        //Swapping Values 
        t = arr_sort[0];
        arr_sort[0] = arr_sort[i];
        arr_sort[i] = t;
        heap_adjust(i, 0);

        cout << "\nHeap Sort Iteration : " << i;
        for (a = 0; a < MAX_SIZE; a++) {
            cout << "\t" << arr_sort[a];
        }
    }
}

void heap_adjust(int n, int i) {
    int large = i, left = 2 * i + 1, right = 2 * i + 2;

    // adjest left child
    if (left < n && arr_sort[left] > arr_sort[large])
        large = left;

    // adjest right child
    if (right < n && arr_sort[right] > arr_sort[large])
        large = right;


    if (large != i) {
        //Swapping Values 
        t = arr_sort[i];
        arr_sort[i] = arr_sort[large];
        arr_sort[large] = t;
        heap_adjust(n, large);
    }
}