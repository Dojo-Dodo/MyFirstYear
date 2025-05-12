#ifndef shop_h
#define shop_h

#include "player.h"
#include "list.h"
#include "queue.h"

void printCat(){
    cout << "                             /| _ ╱|、  \n";
    cout << "\033[1;35m   Meow...\033[0m                  ( •̀ㅅ •́  )\n";
    cout << " \033[1;35mWelcome to my shop...\033[0m   ＿ノ ヽ  ノ＼＿ \n";
    cout << "                       /　`/ ⌒Ｙ⌒ Ｙ　 \\\n";
    cout << "                      (  (三ヽ人　/　   |\n";
    cout << "                     |  ﾉ⌒＼ ￣￣ヽ　 ノ\n";
    cout << "                      ヽ＿＿＿＞､＿＿／\n";
    cout << "                           ｜( 王 ﾉ〈 \n";

}

void printShop(){
    printCat();
    cout << "**************** SHOP ****************" << endl;
    cout << "1. Upgrade your SWORD" << endl;
    cout << "2. Buy HEAL Potion" << endl;
    cout << "3. BUY Ping pong bomb" << endl;
    cout << "4. WHY THESE JUNKS SO COSTLY!!!" << endl;
    cout << "5. Returning item (the first item you picked)" << endl;
    cout << "6. Check out & Exit" << endl;
    cout << "**************************************" << endl;
}

void shopping(player& p){
    int choice, askCat = 0, selectedPotion, selectedBomb;
    list l;
    Queue q;
    bool validAnswer;

    // CREATING THE LIST OF UPGRADE
    l.insert_node(10,0,"Wooden Sword");
    l.insert_node(20,50,"Stone Sword");
    l.insert_node(30,80,"Aluminium Sword");
    l.insert_node(40,150,"Super Pro Max Sword");
    
    do{
        cout << "\033[1;33mYour scrap: " << p.getScrap() << "\033[0m"<< endl;
        q.printQueue();
        cout << "\033[1;32mPlease Select: \033[0m";
        cin >> choice;
        switch(choice){
            case 1:
                //price of upgrade
                l.upgrade(p);
                validAnswer = false;
                break;
            case 2:
                cout << "\n How many potions do you want to buy (20 scraps/potion)? \n Amount: ";
                cin >> selectedPotion;
                q.enqueue(selectedPotion,20,"Heal Potion");
               
                validAnswer = false;
                break;
            case 3:
                cout << "\n How many Ping pong bomb do you want to buy (100 scraps/bomb)? \n Amount: ";
                cin >> selectedBomb;
                q.enqueue(selectedBomb,100,"Ping pong bomb");
               
                validAnswer = false;
                break;
            case 4:
                switch(askCat){
                    case 0:
                        cout << "\n\033[1;35m Do you think you have a choice? \033[0m\n";
                        askCat++;
                        break;
                    case 1:
                        cout << "\n\033[1;35m Do not say that again or I will double the price!\033[0m\n";
                        askCat++;
                        break;
                    case 2:
                        cout << "\n\033[1;35m you ask for it...\033[0m\n";
                        askCat++;
                        break;
                    case 3:
                        cout << "\n ... \n";
                        break;
                }
                validAnswer = false;
                break;
            case 5:
                q.returnItem();
                break;
            case 6:
                if(q.get_size()>0){
                    //DEQUEUE HERE
                    q.dequeue(p);
                }
                else{
                    cout << "\n ...Exiting the shop... \n";
                    validAnswer = true;
                }
                break;
            default:
                cout << "\nError, wrong choice\n";
                validAnswer = false;
                break;
        }
    }while(!validAnswer);
    
}


#endif