#include <iostream>

struct Node {
    int data;
    Node* next;
};

bool add(Node*& head, int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return false;
        }
        current = current->next;
    }

    current = head;
    head = new Node{ value, current };
    return true;
}

int size(Node* head) {
    std::cout << "Printing sizes of nodelist" << std::endl;

    Node* ptr = head;
    int counter = 0;
    while (ptr != nullptr) {
        counter++;
        ptr = ptr->next;
    }
    return counter;
}

void printNodes(Node* head) {
    std::cout << "Printing nodes " << std::endl;
    Node* ptr = head;
    while (ptr != nullptr) {
        std::cout << "Data: " << ptr->data << std::endl;
        std::cout << std::endl;
        ptr = ptr->next;
            }
}

int main()
{
    Node* head = nullptr;

    Node n1{ 1, nullptr };
    Node n2{ 2, &n1 };
    Node n3{ 3, &n2 };
    head = &n3;

    printNodes(head);
    size(head);

    add(head, 3);
    add(head, 4);
    add(head, 7);

    printNodes(head);
    size(head);





}
