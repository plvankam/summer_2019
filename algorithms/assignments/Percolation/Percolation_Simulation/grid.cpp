#include "grid.h"
#include "node.h"
#include<memory>
#include<algorithm>

Grid::Grid(unsigned int N)
{
    percolates = false;
    top_root = std::make_shared<Node>(N);
    btm_root = std::make_shared<Node>(N + 1);
    for(unsigned int i = 0; i < N; ++i)
        {Node_Vector.push_back(std::make_shared<Node>(i));}
    for(unsigned int i = 0; i < N; ++i)
    {
        Node_Vector[i]->map_neighbors(N,i,Node_Vector);
    }
}

Grid::~Grid()
{
}

