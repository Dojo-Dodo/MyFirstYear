#include "node.h"
#include "player.h"
#include <cstring>

class list{
    NodePtr head;
    int size;

    public:
        void insert_node(int,int, string);
        void print_all_nodes();
        void upgrade(player&);
        list();
        ~list();
};

void list::insert_node(int x, int y, string n){
    NodePtr new_node = new NODE(x, y, n);

    if (head == NULL || x < head->get_value()) {
        new_node->set_next(head);
        head = new_node;
    } else {
        NodePtr current = head;
        while (current->get_next() != NULL && current->get_next()->get_value() < x) {
            current = current->get_next();
        }
        new_node->set_next(current->get_next());
        current->set_next(new_node);
    }
    size++;
}

void list::print_all_nodes() {
    NodePtr current = head;
    while (current != nullptr) {
        cout << "Node value: " << current->get_value() << ", Node name: " << current->get_name() << endl;
        current = current->get_next();
    }
}

void list::upgrade(player &p){
    NodePtr t = head;
    int levelOfSword=0;
    char answer[3];
    while(strcmp(p.getSword().c_str(), t->get_name().c_str()) != 0){
        t = t->get_next();
        levelOfSword++;
    }
    
    if(t->get_next() != nullptr){
        //print out Sword that player owns right now
        cout << "Right now, You have a " << t->get_name() << endl;
        //set t point to the next available Sword
        t = t->get_next();
        cout << "Do you want to upgrade your sword to " << t->get_name() << "? " << t->get_price() << " scraps (y/n): ";
        cin >> answer;
        //if player say yes and have enough money DO THE UPGRADE!
        if((answer[0]=='y' || answer[0]=='Y')&& t->get_price() <= p.getScrap()){
            //Update player's scrap
            p.setScrap(p.getScrap()-t->get_price());
            //Update sword and attack index in player.h
            p.setSword(t->get_name());
            p.setA(t->get_value());

            cout << "\033[1;35mNOW YOUR SLASH ATTACK DEALS " << p.getA()  << " DAMAGES"<< endl;
            cout << "Now upgrading to " << p.getSword() << "\033[0m\n" << endl;
        } 
        else if(answer[0]=='n' || answer[0]=='N'){
            cout << "Leaving the Upgrade zone...\n" << endl;
        }
        else{
            cout << "SORRY, NOT ENOUGH SCRAPS!\n" << endl;
        }
    }
    else{
        cout << "Your sword reached the maximum level!" << endl;
    }
    

}

list::list(){
    head = NULL;
    size = 0;
}

list::~list(){
    NodePtr t;
    t = head;
    while(t){
        head = head->get_next();
        delete t;
        t = head;
    }
}