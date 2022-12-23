// cpp program implementing singly linked list
// and traversal of Singly linked list
#include <bits/stdc++.h>
using namespace std;
// structure of Node 
// class Node containing int data;
// pointer to the address of the next node 
class Node{
    public:
        int data;
        Node * next;
};
// Here the size of the Node class becomes 
// 12 bytes (int data of 4 bytes , Node * next pointer of 8 bytes)
// which leads to the total of 12 bytes

// Function to print the ll(linked list)
void print_linked_list(Node * n){
    // iterating till n reaches NULL---> the time complexity -> O(n)
    while(n != NULL){
        // print the data
        cout << n-> data << " "; // Here `n-> data == (*n).data`
        n = n->next;
    }

}
// main
int main(void){
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;
    // allocate node's in heap
    // basically creating three Node object dynamically using new operator and storing 
    // the address `new` operator allocates memory on the heap
    // and returns a pointer to the allocated memory.

    head = new Node();
    second = new Node();
    third = new Node();
    // Assign data
    head->data = 1;
    // link first node with second
    head -> next = second;
    // assign data to second 
    second -> data = 2;
    // link second node to third
    second -> next = third;
    // assign value to the third node
    third -> data=3;
    third->next = NULL;
    print_linked_list(head);
    return 0;
}