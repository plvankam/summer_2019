#include "node.h"
#include "grid.h"
#include <iostream>

Node::Node(unsigned int index)
{
    // top, bottom, left, right
    top_neighbor    = NULL;
    bottom_neighbor = NULL;
    left_neighbor   = NULL;
    right_neighbor  = NULL;
    // state

    // root
}

Node::~Node()
{

}
