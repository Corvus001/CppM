#include <iostream>

class Node {

  private:
    int _val;

  public:
    Node(int val): _val(val) {}
    virtual ~Node(){};
    void print(void) const { std::cout << _val << std::endl; }
    void setVal(int val){ _val = val; }
};

class ConstNode {

  private:
    Node *_node;

  public:
    ConstNode(void){ _node = new Node(0); }
    virtual ~ConstNode(void){}
    void printNode(void) const { _node->print(); }
    const Node *getNode(void) const { return _node; }
};

