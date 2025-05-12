#ifndef queue_h
#define queue_h
#include "node.h"
#include "player.h"
#include <cstring>
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int,int,string);
    void dequeue(player &);
    void returnItem();
    int get_size();
    void printQueue();
    Queue();
    ~Queue();
};


void Queue::enqueue(int x,int y,string itemName){
  NodePtr new_node= new NODE(x,y,itemName);
if(new_node){ 
  //1. connect & Change tail
  //2. (may be) change head  when the queue is empty
  //3. increase size

  if(size>0){
    tailPtr->set_next(new_node);
  }else headPtr = new_node;
  
  tailPtr = new_node;
  size++;
 }
}

//Operate like dequeue but It will delete the first node ever
void Queue::returnItem(){
    if(headPtr != nullptr){
        NodePtr t = headPtr;
        if(headPtr->get_next() == nullptr){
            headPtr = nullptr;
            tailPtr = nullptr;
        }else{
            headPtr = t->get_next();
        }
        cout << "Returing " << t->get_name() << "x" << t->get_value() << "\n\n";
        delete t;
        size--;
    }
    else{
        cout << "You don't have any item to return.\n" << endl;
    }
}

void Queue::dequeue(player &p) {
    if (headPtr != nullptr) {
        NodePtr t = headPtr;

        if (headPtr->get_next() == nullptr) {
            headPtr = nullptr;
            tailPtr = nullptr;
        } else {
            headPtr = t->get_next();
        }

        cout << "You checked out... " << t->get_name() << endl;
        if (t->get_value() * t->get_price() <= p.getScrap()) {
            p.setScrap(p.getScrap() - (t->get_value() * t->get_price()));
            cout << "\033[1;32m$$$ Successfully bought " << t->get_value() << " " << t->get_name() << "$$$\033[0m\n\n";
            if (t->get_price() == 20) {
                p.setPotion(p.getPotion() + t->get_value());
            } else if (t->get_price() == 100) {
                p.setBomb(p.getBomb() + t->get_value());
            }
            delete t;
            size--;
        } else {
            //set headPtr point back to the first node!
            headPtr = t;
            if(size == 1){
                //set tailPtr from nullPtr to node!
                tailPtr = t;
            }
            cout << "\n\033[1;35mYou don't have enough money! Please delete this item from the basket\033[0m\n\n";
        }
    }
}



int Queue::get_size(){
  return size;
}

void Queue::printQueue() {
    NodePtr current = headPtr;
    int i=1;
    while (current != nullptr) {
        // Print node's data
        if(i==1){
            cout << "Your Basket: ";
        }
        else if(i>1){
            cout << "             ";
        }
        cout << current->get_name() << "x" << current->get_value() << endl;
        current = current->get_next(); 
        i++;
    }
    if (size == 0)
        cout << "Your Basket: EMPTY.." << endl;
}

Queue::Queue(){
    headPtr = nullptr;
    tailPtr = nullptr;
    size =0;
    
}
Queue::~Queue(){
    //delete all remaning Queue (i.e. DQ all) 
    NodePtr t=headPtr;

    while(headPtr){
      t=headPtr->get_next();
      //cout << "DESTRUCTOR deleting " << order  << " " << num << endl;
      delete headPtr;
      headPtr = t;
      size--;
    }

    
}


#endif