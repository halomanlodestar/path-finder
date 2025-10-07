#include <iostream>
#include "maze-solver/node.hpp"

int main() {

  Node* node = new Node(5);

  std::cout << node->val;
}