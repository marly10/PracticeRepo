#include <iostream>
#include <vector>
#include <string>
using namespace std;

void fizzBuzzFunction(int loopData);


class Node {
public:

    //default constructor & loaded
    Node();
    Node(int & newNumber, Node *& NewNode);

    //int: getter & setter
    int getNumber() const;
    void setNumber(int newNumber);

    //node: getter & setter
    Node * getNext();
    void setNext(Node * newNext);

    int nodesCreated();


private:
    int numbers = 0, nodeQt = 0;
    Node * nextNode = nullptr;
};

Node::Node() {
    numbers = 0;
    nextNode = nullptr;

}

Node::Node(int &newNumber, Node *&NewNode) {

    numbers = newNumber;
    nextNode = NewNode;
}

int Node::getNumber() const {
    return numbers;
}

Node *Node::getNext() {
    return nextNode;
}

void Node::setNext(Node *newNext) {

    nextNode = newNext;
}

void Node::setNumber(int newNumber) {
    numbers = newNumber;
}

//return the number of nodes
int Node::nodesCreated() {

    Node * sizeValue = nextNode;
    while(sizeValue != nullptr)
    {
        nodeQt++;
        sizeValue = sizeValue->getNext();
    }
    return nodeQt;
}

class NodeList{
public:
    NodeList();
    void addNode(int nodeValue);
    void printNodes();


private:
    Node * headNode;
    int nodeQt = 0;

    void printNodes(Node *h);
};

NodeList::NodeList() {

    headNode = nullptr;
}

void NodeList::addNode(int nodeValue) {

    //baseCase
    if(headNode == nullptr || headNode == 0)
    {
        headNode = new Node();
        headNode->setNumber(nodeValue);
        headNode->setNext(nullptr);
    }
    //generalCase
    else
    {
        Node * tempNode = headNode;

        while (tempNode->getNext() !=0)
        {
            tempNode = tempNode->getNext();
        }
        tempNode->setNext(new Node);
        tempNode->getNext()->setNumber(nodeValue);
        tempNode->getNext()->setNext(0);
    }

}

//prints the nodes made
void NodeList::printNodes(Node * h) {

    Node * tempNode = headNode;

    while(tempNode != nullptr)
    {
        cout << tempNode->getNumber() << " " << endl;
        tempNode = tempNode->getNext();
    }
}

string fizzBuzz(int number)
{
    unsigned newData = number;

    //empty string to add either fizz || buzz
    string fizzString;

    //for loop based on the input
    for(int i = 1; i <= newData; i++)//condition on the amount of loops
    {
        if(i % 3 == 0 && i % 5 == 0)//modules of 3 && 5 == 0(FizzBuzz)
        {
            fizzString = "FizzBuzz";
        }
        else if(i % 3 == 0)//modules of 3 == 0(Fizz)
        {
            fizzString = "Fizz";
        }
        else if(i % 5 == 0)//modules of 5 == 0(Buzz)
        {
            fizzString = "Buz1z";
        }
        else
        {
            fizzString = to_string(i); //if not int the number sequence print the number
        }

        cout << fizzString << endl;//printing & changing the string to a new
    }

return "";
}

int main()
{

    //cout << fizzBuzz(33)<< endl;

    Node * first = nullptr;
    Node * second = nullptr;
    Node * third = nullptr;

    //being added on the heap
    first  = new Node();
    second = new Node();
    third  = new Node();

    first->setNumber(1);
    second->setNumber(2);
    third->setNumber(3);

    first->setNext(second);
    second->setNext(third);
    third->setNext(nullptr);

    cout << "Number: "<<first->nodesCreated();

    NodeList p;

    p.printNodes(first);

    /*
    //fizzBuzzFunction(15);//calling function

    vector<int> newVec;

    int count = 0, number = 0, find = 0;

    newVec.push_back(1);
    newVec.push_back(5);
    newVec.push_back(10);
    newVec.push_back(15);
    newVec.push_back(20);
    newVec.push_back(25);
    newVec.push_back(30);



    cout << "Find data: "<<endl;
    cin >> number;

    for(int i = 0; i <newVec.size(); i++)
    {
        cout <<"File: "<< newVec[i] << endl;

        if(newVec[i] == number)
        {
            //count++;
            i = find;

            cout << "Items: "<< newVec.at(find) << endl;

            if(i == find)
            {
                continue;//continues through the loop even after a name was found(in case more ducks)
            }
        }

        else
        {
            cout << "not here"<< endl;
            find = -1;
        }
    }
*/
    return 0;
}

//fizzBuzz function generator
void fizzBuzzFunction(int loopData)
{
    //if number entered by user is < 0 then make it a positive
    unsigned int positiveNumber = loopData;

    //empty string to add either fizz || buzz
    string fizzString;

    //for loop based on the input
    for(int i = 1; i <= positiveNumber; i++)//condition on the amount of loops
    {
        if(i % 3 == 0 && i % 5 == 0)//modules of 3 && 5 == 0(FizzBuzz)
        {
            fizzString = "FizzBuzz";
        }
        else if(i % 3 == 0)//modules of 3 == 0(Fizz)
        {
            fizzString = "Fizz";
        }
        else if(i % 5 == 0)//modules of 5 == 0(Buzz)
        {
            fizzString = "Buzz";
        }
        else
        {
            fizzString = to_string(i); //if not int the number sequence print the number
        }

        cout << fizzString << endl;//printing & changing the string to a new
    }
}
