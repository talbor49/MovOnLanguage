#ifndef PARENTNODE_H
#define PARENTNODE_H

#include <string>
#include "Node.h"
class ParentNode : public Node {
public:
    std::string name;
    ParentNode(Node *parent, NodeType nodeType, std::vector<Tok> tokens, std::string name);
};


#endif