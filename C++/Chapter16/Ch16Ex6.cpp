#include <iostream>

template <typename T>
struct Node {
    T data;
    Node* next;
};

template <typename T>
class LinkedList {
    // Private member variable "head", which points to the first node of the list
    private:
        Node<T>* head;
    
    // Initializes the 'head' pointer to nullptr (empty list)
    public:
        LinkedList() : head(nullptr) {}

        //Function to insert a new node in the correct order in the list
        void insert_in_order(T value) {
            Node<T>* newNode = new Node<T>; // Creates a new node using dynamic memory allocation
            newNode->data = value; // Assign the input value to the node's data
            newNode->next = nullptr; // Set the next pointer to nullptr since this is the last node for now

            // If the list is empty, the new node becomes the head of the list and the function returns
            if (head == nullptr) { 
                head = newNode;
                return;
            }

            // If the list is not empty, the function starts traversing
            Node<T>* current = head; // Start traversing from the head
            Node<T>* previous = nullptr; // Keep track of the previous node

            // Traverse the list until the appropiate position for the new node is found
            while (current != nullptr && value > current ->data) {
                previous = current;
                current = current->next;
            }

            // If the 'previous' pointer is 'nullptr', the new node needs to be inserted at the beginning of the list
            if (previous == nullptr) {
                newNode -> next = head; // Adjust the next pointer of the new node to point to the current head
                head = newNode; // Update the head to point to the new node
            } else { // If the 'previous' pointer is not 'nullptr', the new node is inserted between the 'previous' and 'current' nodes 
                newNode -> next = current; // Adjust the next pointer of the new node to the point to the current node
                previous -> next = newNode; // Adjust the next pointer of the previous node to point to the new node
            }

        }

        // Function to display the contents of the list
        void display() {
            Node <T>* current = head; 
            while (current != nullptr) { 
                std::cout << current -> data << " "; 
                current = current -> next; 
            }
        }    
};

int main() {
    LinkedList<int> myList;

    // Insert value into the list in order
    myList.insert_in_order(5);
    myList.insert_in_order(3);
    myList.insert_in_order(7);
    myList.insert_in_order(2);
    myList.insert_in_order(9);

    myList.display(); // Output: 2 3 5 7 9

    return 0;
}
