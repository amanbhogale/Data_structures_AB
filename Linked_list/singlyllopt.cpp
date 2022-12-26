#include <iostream>
#include <memory>

struct Node {
    int data;
    std::unique_ptr<Node> next;
};

int main() {
  std::unique_ptr<Node> head = nullptr; // Create an empty linked list

  // Append some nodes to the linked list
    std::unique_ptr<Node> n1 = std::make_unique<Node>();
    n1->data = 1;
    head = std::move(n1);
    std::unique_ptr<Node> n2 = std::make_unique<Node>();
    n2->data = 2;
    head->next = std::move(n2);
    std::unique_ptr<Node> n3 = std::make_unique<Node>();
    n3->data = 3;
    head->next->next = std::move(n3);

  // Print the linked list
    std::unique_ptr<Node> current = std::move(head);
    while (current != nullptr) {
    std::cout << current->data << " ";
    current = std::move(current->next);
}
    std::cout << std::endl;

    return 0;
}
