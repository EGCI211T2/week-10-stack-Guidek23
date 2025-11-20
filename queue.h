#ifndef queue.h
#define queue.h

class queue{
     int data;
    NODE *nextPtr;
public:
    void enqueue(int x);
    int dequeue();


};
typedef NODE* NodePtr;




void Queue::enqueue(int x)
{
    NodePtr new_node = new NODE (x);
    if(new_node)
    {
        /*Add head and tail*/
        //cinnect and change tail
        if (size > 0) //if(tailPtr != NULL) | if(headPtr) either one works
        tailPtr->set_next(new_node);//can't do this when it's NULL
        else headPtr = new_node;


        //change head when the queue is empty
        tailPtr=new_node;

        //add size
        ++size;
    }
}

int Queue::dequeue()
{
    if (size > 0) //if (headPtr != NULL)
    {
        t = headPtr;
        headPtr = headPtr -> get_next();

        int value = t -> get_value();

        //add head and tail

        size--;
        if (size == 0) 
    tailPtr == NULL;
    
    delete t;
    return value;
    } 
    cout << "Empty queue";
    return -1;
}