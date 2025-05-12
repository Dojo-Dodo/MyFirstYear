#include <iostream>
#include <cstdlib>
#include <string>

#define SIZE 5

using namespace std;
#include "menu.h"
#include "dialogue.h"
#include "object.h"
#include "boss.h"
#include "player.h"
#include "puzzle.h"
#include "shop.h"

int main(int argc, char *argv []){

    int i,round,GeneratedNumbers[SIZE];
    int num_potions = 3;
    bool gameRunning = false, Enter = false;


    //declare the pointer points to player and 3 bosses
    player* p = new player(150,10,10,argv[1],100,num_potions,0,0,"Wooden Sword");
    boss* ptb = new boss[5]{
        boss(100,0,5,"OobOob 🐸",1),
        boss(150,0,10,"Ho้ng Ho้ng 🐉",2),
        boss(250,0,15,"KatakPokPok 🐔",3),
        boss(300,0,20,"Little Cutie Cupcake🧁",4),
        boss(550,0,25,"THANOS",5)
    };

    //using operator overload to print out the information of class player.
    std::cout << *p << std::endl;


    // GAME PROGRESS ZONE!
        //printing menu
    printTitle();
    menu();
    choose(gameRunning);
        //if player choose start run these code!
    if(gameRunning){
        Enter = Entrance(Enter);
        if(Enter){
            for(i=0;i<5;i++){
                round = 1;
                p->setH(150);
                p->setS(100);
                // if boss die exit the while-loop
                while(ptb[i].getH() > 0){
                    // when fighting each boss there is a round index, and when you fighting the next boss IT WILL SET TO 1 AGAIN!
                    cout << "ROUND: " << round << endl;
                    if(round == 1){
                        ptb[i].spawn_boss(ptb[i], i+1);
                    }
                    //checking if player's health below 0
                    if(p->getH() > 0){
                        ptb[i].bossStats(ptb[i]);
                        p->printMoves(*p);
                        p->playerStats();
                        p->attackMove(*p,ptb[i]);
                        bossAttack(*p,ptb[i]);
                        round++;
                    }
                    //player DEAD
                    else{
                        TheEnd();
                        dead();
                    }
                }
                //Drop Scrap from Boss
                switch(ptb[i].get_num_boss()){
                    case 1:
                        p->setScrap(p->getScrap()+50);
                        break;
                    case 2:
                        p->setScrap(p->getScrap()+100);
                        break;
                    case 3:
                        p->setScrap(p->getScrap()+200);
                        break;
                    case 4:
                        p->setScrap(p->getScrap()+300);
                        break;
                    case 5:
                        p->setScrap(p->getScrap()+1);
                    default:
                        cout << "\033[0;33mYou didn't get any scrap...\033[0m\n" << endl;
                        break;
                }
                cout << "\033[0;33m!!!YOU GOT " << p->getScrap() << " SCRAPS FROM " << ptb[i].getName()<< " !!!\033[0m\n" << endl;
                //SHOP HERE
                if (i!=4){
                    printShop();
                    shopping(*p);
                }
                
            }
            //Puzzle Zone
            /*generateRandomNumbers(GeneratedNumbers,SIZE);
            printGenerateNum(GeneratedNumbers,SIZE);
            //Sorting method here!
            bubbleSort(GeneratedNumbers, SIZE);
            //Checking if the input of the user is right
            checkAnswer(GeneratedNumbers, SIZE);*/

            win(*p);
        }
    }
    //free memory
    delete[] ptb;
    return 0;
}