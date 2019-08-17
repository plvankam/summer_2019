#include "grid.h"
#include "node.h"

Grid::Grid(unsigned int N)
{
    percolates = false;
    btm_root = new Node(N + 1);
    top_root = new Node(N);
    for(unsigned int i = 0; i < N; ++i)
        {Node_Vector.push_back(new Node(i));}
}

Grid::~Grid()
{
    delete btm_root;
    delete top_root;
    for(Node* node : Node_Vector) delete node;
}

