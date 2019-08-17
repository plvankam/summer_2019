#ifndef GRID_H
#define GRID_H

#include<vector>
#include"node.h"

class Grid
{
private:
    std::vector<Node*> Node_Vector;
    bool               percolates;
    Node*              top_root;
    Node*              btm_root;
public:
    // Grid();
    Grid(unsigned int N);
    ~Grid();
    bool Percolates() const { return percolates; }
};

#endif // GRID_H
