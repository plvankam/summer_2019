#ifndef NODE_H
#define NODE_H

#include<memory>
#include<vector>

class Node
{
private:
    std::shared_ptr<Node>   top_neighbor;
    std::shared_ptr<Node>   left_neighbor;
    std::shared_ptr<Node>   bottom_neighbor;
    std::shared_ptr<Node>   right_neighbor;
    Node*         root;
    bool          open;
    unsigned int  index;

public:
    Node(unsigned int index);
    ~Node() {}
    void map_neighbors(unsigned int N, 
                       unsigned int index,  
                       std::vector<std::shared_ptr<Node>> node_vector);
};

#endif // NODE_H
