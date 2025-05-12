#ifndef PLAYER_H
#define PLAYER_H

#include "object.h"
#include "boss.h"
#include <string>

class player:public object{
    private:

    protected:
        int num_potions,num_bombs,stamina,scrap;
        string SWORD;


    public:
    //constructor
        player(int h,int a,int d, std::string n, int s,int potion,int bomb,int scr,string sword): object(h, d, a, n),
            stamina(s),num_potions(potion),num_bombs(bomb),scrap(scr),SWORD(sword){}
    //destructor
        ~player();
        int getS();
        int getPotion();
        int getBomb();
        int getScrap();
        string getSword();

        void setPotion(int);
        void setBomb(int);
        void setS(int);
        void setScrap(int );
        void setSword(string );

    // operator overload
        friend std::ostream& operator<<(std::ostream& os, player& p);

        void printMoves(player &);
        void playerStats();

        void attackMove(player &, boss &);
};
player::~player(){
    cout << getName() << " has vanish into the ruins..." << endl;
}

int player::getPotion(){
    return num_potions;
}
int player::getBomb(){
    return num_bombs;
}
int player::getS(){
    return stamina;
}
int player::getScrap(){
    return scrap;
}
string player::getSword(){
    return SWORD;
}

void player::setPotion(int potion){
    num_potions = potion;
}
void player::setBomb(int bomb){
    num_bombs = bomb;
}
void player::setS(int s){
    if(s>100) stamina = 100;
    else stamina = s;
}
void player::setScrap(int src){
    scrap = src;
}
void player::setSword(string inputSword){
    SWORD = inputSword;
}


//operator overload : printing the stat of the player
std::ostream& operator<<(std::ostream& os, player& p) {
    os << "+++++++++++ PLAYER INFORMATION +++++++++++" << std::endl;
    os << "Player Name: " << p.getName() << std::endl;
    os << "Health: " << p.getH() << std::endl;
    os << "Attack: " << p.getA() << std::endl;
    os << "Stamina: " << p.getS() << std::endl;
    os << "Healing potions: " << p.getPotion() << std::endl;
    os << "Ping Pong Bomb: " << p.getBomb() << std::endl;
    return os;
}

void player::printMoves(player &p){
  std::cout << "=====================MOVES=====================" << std::endl;
  std::cout << "1. Slash (deals "<< p.getA() << " damages) [10 stamina]" << std::endl;
  std::cout << "2. Use HEAL potion (Heals 50 HP) [10 stamina]" << std::endl;
  std::cout << "3. Close combat (deals 30 damages) [40 stamina]" << std::endl;
  std::cout << "4. Rest (Restore 50 stamina)" << std::endl;
  std::cout << "5. Use Ping pong Bomb (deals 100 damages) [10 stamina]" << std::endl;
}

void player::playerStats(){
  std::cout << "===============================================" << std::endl;
  std::cout << "|Your Health: "<< health <<"                             |" << std::endl;
  std::cout << "|Your Stamina: "<< stamina <<"                            |" << std::endl;
  std::cout << "===============================================" << std::endl;
  
}

void player::attackMove(player &p,boss &b){
  int choice;
  bool validChoice = false;
  do {
      cout << "\033[1;32mPlease select: \033[0m";
      cin >> choice;
      switch(choice){
          case 1:
            if(p.getS()>=10){
                cout << "\033[1;36mYou use SLASH!\033[0m" << endl;
                b.setH(b.getH()-p.getA());
                p.setS(p.getS()-10);
                cout << b.getName() << "'s Health: " <<b.getH() << " HP" << endl; // Print boss's initial health
                validChoice = true;
            }
            else{
                cout << "\033[1;31m-> NOT ENOUGH STAMINA\033[0m" << endl;
                validChoice = false;
            }
            break;
             
          case 2:
            if(p.getS()>=10){
                if(p.getPotion() <= 0){
                    cout << "\033[1;31m-> There is no potion in your inventory!\033[0m" << endl;
                    validChoice = false;
                }
                else{
                    cout << "\033[1;36m-> You use 1 potion!\033[0m" << endl;
                    p.setH(p.getH()+50);
                    p.setS(p.getS()-10);
                    p.setPotion(p.getPotion()-1);
                    cout << "-> You got " << p.getPotion() << " healing potions left" << endl;
                    validChoice = true;
                }
            }
            else{
                cout << "\033[1;31m-> NOT ENOUGH STAMINA\033[0m" << endl;
            }
            break;
          case 3:
                if(p.getS()>=40){
                    cout << "\033[1;36m->You use Close combat\033[0m" << endl;
                    b.setH(b.getH()-30);
                    p.setS(p.getS()-40);
                    validChoice = true;
                }
                else{
                    cout << "\033[1;31m-> NOT ENOUGH STAMINA\033[0m" << endl;
                    validChoice = false;
                }
                break;

          case 4:
                cout << "\033[1;36m->You use rest, and you're sleeping in front of enemy!\033[0m" << endl;
                p.setS(p.getS()+50);
                validChoice = true;
                break;
          case 5:
               
                if(p.getS()>=10){
                if(p.getBomb() <= 0){
                    cout << "\033[1;31m-> There is no Ping Pong Bomb in your inventory!\033[0m" << endl;
                    validChoice = false;
                }
                else{
                    cout << "\033[1;36m->You use 1 Ping Pong Bomb!\033[0m" << endl;
                    b.setH(b.getH()-100);
                    p.setS(p.getS()-10);
                    p.setBomb(p.getBomb()-1);
                    cout << "-> You got " << p.getBomb() << " Ping Pong Bomb left" << endl;
                    validChoice = true;
                }
            }
            else{
                cout << "\033[1;31m-> NOT ENOUGH STAMINA\033[0m" << endl;
            }
            break;
          default:
              cout << "\033[1;31mInvalid choice. Please try again.\033[0m" << endl;
              break;
      }
  } while (!validChoice);
}
#endif