#ifndef node_h
#define node_h
#include <cstring>

class NODE{
    int data,price;
    string name;
    NODE *nextPtr;
public:
    NODE(int,int,string);
    ~NODE();
    void set_next(NODE*);

    NODE* get_next();
    int get_value();
    int get_price();
    string get_name();
};

typedef NODE* NodePtr;


NODE::NODE(int x,int y,string n){
    data=x;
    price=y;
    name=n;
    nextPtr=NULL;
    //pPtr =NULL; not using doubly
}
NODE* NODE::get_next(){
    return nextPtr;
}

int NODE::get_value(){
    return data;
}

int NODE::get_price(){
    return price;
}

string NODE::get_name(){
    return name;
}

void NODE::set_next(NODE *t){
    nextPtr=t;
    
}

NODE::~NODE(){
    //cout<<"deleting "<<data<<endl;
}

#endif