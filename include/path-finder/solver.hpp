#include "node.hpp"

class Solver {
  public:
    Solver() = default;
    virtual ~Solver() = default;

    virtual void solve(Node start) = 0;
};
