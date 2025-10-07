#include <iostream>
#include <ostream>
#include "path-finder/node.hpp"

using namespace std;

int main() {

  Node* node = new Node(5);

  std::cout << node->val << std::endl;
}