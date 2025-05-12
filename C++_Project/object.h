#ifndef OBJECT_H
#define OBJECT_H


//NOTE: Object is a base class for boss.h and player.h
class object{
    private:
        string name;
    protected:
        int health,attack,defense;
    public:
        object(int h,int a,int d, string n);
        int getH();
        int getA();
        int getD();
        string getName();

        void setH(int);
        void setA(int);
        void setD(int);

};

object::object(int h,int a,int d, string n){
    health = h;
    attack = a;
    defense = d;
    name = n;
}

int object::getH(){
    return health;
}
int object::getA(){
    return attack;
}
int object::getD(){
    return defense;
}
string object::getName(){
    return name;
}

void object::setH(int h){
    health = h;
}
void object::setA(int a){
    attack = a;
}
void object::setD(int d){
    defense = d;
}
#endif