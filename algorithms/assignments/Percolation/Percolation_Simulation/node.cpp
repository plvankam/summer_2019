#include "node.h"
#include "grid.h"
#include <iostream>

Node::Node(unsigned int index)
{

    top_neighbor    = NULL;
    left_neighbor   = NULL;
    bottom_neighbor = NULL;
    right_neighbor  = NULL;
    this->index     = index;
    root            = this;
    open            = true;
}

void Node::map_neighbors(unsigned int N,  
                         unsigned int index,
                         std::vector<std::shared_ptr<Node>> node_vector)
{
    if(index % N)              left_neighbor   = node_vector[index - 1];
    if((index + 1) %  N)       right_neighbor  = node_vector[index + 1];
    if((index + N) <  (N * N)) top_neighbor    = node_vector[index + N];
    if((index - N) >= 0)       bottom_neighbor = node_vector[index - N];
}
