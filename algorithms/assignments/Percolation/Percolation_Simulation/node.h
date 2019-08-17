#ifndef NODE_H
#define NODE_H


class Node
{
private:
    Node* top_neighbor;
    Node* left_neighbor;
    Node* bottom_neighbor;
    Node* right_neighbor;
    bool  open;
    Node* root;

public:
    Node(unsigned int index);
    ~Node();
};

#endif // NODE_H
