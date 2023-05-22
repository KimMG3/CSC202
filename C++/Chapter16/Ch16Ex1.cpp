//By convention lists are printed with parenthesis with commas between the elements, as in (1,2,3). Modify the print_list function from Lists as collections so that it generates output in this format

#include <iostream>

struct Node {
    int cargo;
    Node* next;

    Node() {
        cargo = 0;
        next = NULL;
    }

    Node(int cargo, Node* next) {
        this->cargo = cargo;
        this->next = next;
    }

    std::string to_str() const {
        return std::to_string(cargo);
    }
};

void print_list(Node* list) {
    Node* node = list;
    std::cout << "("; // Add an opening parenthesis at the beginning

    while (node != NULL) {
        std::cout << node -> cargo; // Print the cargo og the current node
        node = node->next; //Move to the next node

        if (node != NULL)
            std::cout << ", "; // Print a comma if there are more nodes
    }

    std::cout << ")"; // Add a closing parenthesis at the end
}

int main(){
    Node node1 = {1, NULL}; // Create the first node with cargo 1 and no next node
    Node node2 = {2, NULL}; // Create the second node with cargo 2 and no next node
    Node node3 = {3, NULL}; // Create the third node with cargo 3 and no next node

    node1.next = &node2; // Set the next pointer of node1 to node2
    node2.next = &node3; // Set the next pointer of node2 to node3

    print_list(&node1); // Print the list starting from node1

    return 0;
}
