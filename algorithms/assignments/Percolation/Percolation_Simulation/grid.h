#ifndef GRID_H
#define GRID_H

#include<vector>
#include<memory>

#include"node.h"

class Grid
{
private:
    std::vector<std::shared_ptr<Node>>     Node_Vector;
    bool                   percolates;
    std::shared_ptr<Node>  top_root;
    std::shared_ptr<Node>  btm_root;
    unsigned int num_nodes;
public:
    // Grid();
    Grid(unsigned int N);
    ~Grid();
    bool         Percolates()    const { return percolates; }
    unsigned int get_num_nodes() const { return num_nodes ; }
 };

#endif // GRID_H
