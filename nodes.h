//
// Created by Ricky Marly on 12/17/20.
//

#pragma once

class nodes {
private:

    //variables used in the node
    int nodeValue;
    nodes * next;
public:
    //empty & (2)loaded constructor
    nodes();
    nodes(int value, nodes * node);

    //section for integer
    int getValue();
    void setValue(int value);

    //section for the nodes
    nodes * getNodeNext();
    void setNodes(nodes * node);

};
