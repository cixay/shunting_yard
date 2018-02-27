#ifndef NODE_H
#define NODE_H
#include <iostream>

// header file for node class

using namespace std;

class Node {
	// each node is assigned a student which can be retrieved
	// each node has a node that comes afterward, next
	public:
		Node();
		~Node();
		void setNext(Node*);
		Node* getNext();
		char c;

	private: 
		Node* next;

};
#endif