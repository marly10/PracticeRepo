//
// Created by Ricky Marly on 12/17/20.
//

#include "nodes.h"
#include <iostream>

nodes::nodes() {

}

nodes::nodes(int value, nodes *node)
{
    nodeValue = value;
    next = node;
}

int nodes::getValue()
{
    return nodeValue;
}

void nodes::setValue(int value)
{
    nodeValue = value;
}

nodes *nodes::getNodeNext()
{
    return next;
}

void nodes::setNodes(nodes * node)
{
    next = node;
}
