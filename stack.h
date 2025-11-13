
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack()
    {
        top = NULL;
        size = 0;
    }
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x); //make new node
  if(new_node)
  {
        new_node->get_next() = top;    // Link the new node to the current top
        top = new_node; // Update the top pointer to the new node
        size++;
   }
 
         // Left missing for exercises…
    
}

int Stack::pop(){
    if (top == NULL)
    {
        cout << "The stack is empty.";
    }
    else{
        NodePtr t=top;
        int value;
        value=t->get_value();
        get_next();
        size--;
        delete t;
        return value;
	//be careful of the empty stack!!!
    }
    }

Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    
}


#endif
