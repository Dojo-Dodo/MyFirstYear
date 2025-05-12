#ifndef BOSS_H
#define BOSS_H

#include "object.h"
#include <iostream>
#include <string>

// Forward declaration of player class
class player;

class boss:public object{
    private:
        int num_boss;

    public:
        int get_num_boss();
    //constructor
        boss(int h,int a,int d, std::string n,int num): object(h, d, a, n),num_boss(num){}
    //destructor
        ~boss(){};
    // operator overload
        friend std::ostream& operator<<(std::ostream& os, boss& b);

        void spawn_boss(boss, int);
        void bossStats(boss);
};

int boss::get_num_boss(){
  return num_boss;
}


//operator overload : printing the information of the boss for a player!
std::ostream& operator<<(std::ostream& os, boss& b) {
    os << "Boss Name: " << b.getName() << std::endl;
    os << "Health: " << b.getH() << std::endl;
    os << "Defense: " << b.getD() << "%" << std::endl;
    os << "Attack: " << b.getA() << std::endl;
    return os;
}

void boss::spawn_boss(boss b, int count){
  switch(count){
    case 1:
      cout << "       _     _" << endl;
      cout << "      (')-=-(')"<< endl;
      cout << "    __(   \"   )__" << endl;
      cout << "   / _/'-----'\\_ \\" << endl;
      cout << " ___\\\\ \\\\     // //___" << endl;
      cout << ">____)/_\\---/_\\(____<" << endl;
      cout << endl;
      cout << "Suddenly a wild "<< b.getName() << " has APPEARS!" << endl;
      cout << " I am Watery. I will create heavy storms to destroy all properties and kill people. This world will be flooed with my hand." << endl;
      cout << " You will be died. Power will be destroyed. Supplies will cut off and no one can help you. Maybe they cannot help themselves. HAHAHAHAHA " << endl;
      break;
    case 2:
      cout << "                \\||/" << endl;
      cout << "                |  @___oo"<< endl;
      cout << "      /\\  /\\   / (__,,,,|" << endl;
      cout << "     ) /^\\) ^\\/ _)" << endl;
      cout << "     )   /^\\/   _)" << endl;
      cout << "     )   _ /  / _)" << endl;
      cout << " /\\\\  )/\\\\/ ||  | )_)" << endl;
      cout << "<  >      |(,,) )__)" << endl;
      cout << " ||      /    \\\\)___)\\\\" << endl;
      cout << " | \\\\____(      )___) )___" << endl;
      cout << "  \\______(_______;;; __;;;" << endl;
      cout << endl;
      cout << "Oh no, " << b.getName() << "has emarged from sleeping!" << endl;
      cout << "Hohoho I'm Firey. My fire is the hottest. Nothing can survive from my fire. I will burn everythimgs." << endl;
      cout << "I will make deforestation. No tree will be left for you. I will make the world hotter. You will be dry to death." << endl;
      break;
    case 3:
        cout << "                   ,~." << endl;
        cout << "                ,-'__ `-," << endl;
        cout << "               {,-'  `. }              ,')" <<endl;
        cout << "              ,( a )   `-.__         ,',')~," <<endl;
        cout << "            <=.) (         `-.__,==' ' ' '}" << endl;
        cout << "               (   )                      /" << endl;
        cout << "               `-'\\   ,                  )" << endl;
        cout << "                    |  \\       `~.      /" << endl;
        cout << "                    \\   `._        \\    /" << endl;
        cout << "                    \\     `._____,'   /" << endl;
        cout << "                      `-.            ,'" << endl;
        cout << "                         `-.      ,-'" << endl;
        cout << "                            `~~~~'" << endl;
        cout << "                            //_||" << endl;
        cout << "                         __//--'/`" << endl;
        cout << "                       ,--'/`  '" << endl;
        cout << "                          '" << endl;
        cout << " Its name strikes fear into the hearts of even the bravest adventurers, whispered in hushed tones by those who dare to speak of it: "<< b.getName()<<", the Devourer of Worlds." << endl;
        cout << " I'm Windy. I will make your air contaminated with dust. You will not have fresh air to breath. Your health will have more problemws and your breath will be mine." << endl; 
        break;
      case 4:
        cout << "⣜⠉⢒⣲⠤⠤⠤⠤⠤⠄⢤⣐⠒⢹⠀⠀⠀⠀" << endl;
        cout << "⣧⠖⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢦⡸⠀⠀⠀" << endl;
        cout << "⡏⠀⢀⡶⣲⣶⡄⠀⢠⡖⣲⣦⠀⠀⠇⢀⠤⡀" << endl;
        cout << "⡃⠀⠈⠛⠿⠟⠁⠀⠈⠛⠛⠛⠀⠀⡅⡾⠀⡃" << endl;
        cout << "⢈⡢⢄⡀⠀⠀⠀⠉⠉⠀⢀⣀⣴⣊⣰⠃⢸⠀" << endl;
        cout << "⠋⢠⠊⠈⢹⠉⠉⠉⠉⠀⠀⠀⠀⠀⠘⡖⠁⠀" << endl;
        cout << "⠀⠀⠀⠀⠀⡇⠀⠀⡄⠀⠀⡒⢲⡆⠀⢨⠀⠀" << endl;
        cout << "⠀⠀⠀⠀⠀⠘⠤⠔⠑⠤⠜⠊⠀⠑⠊⠀⠀⠀" << endl;
        cout << " \"Hello, Nice to meet you traveler! Let's me eat you real quick\"" << endl;
        cout << " My ability is to make this world drought. People will lack of food and water. No plants can survive in this situations. Hehehehe" << endl;
        cout << " People will face malnutrition and have more health problems." << endl;
        break;
      case 5:
        cout << "⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛⬜⬛⬛⬛⬜⬜⬜⬜⬜⬜\n";
        cout << "⬜⬜⬜⬜⬜⬜⬛⬛⬜⬛⬜🟨⬛🟨⬜🟨⬛⬜⬜⬜⬜⬜\n";
        cout << "⬜⬜⬜⬜⬜⬛⬜🟨⬛🟨🟨🟨⬛🟨🟨🟨⬛⬜⬜⬜⬜⬜\n";
        cout << "⬜⬜⬜⬛⬛🟨🟨🟨⬛🟨🟨🟨🟨🟨⬛🟨⬛⬜⬜⬜⬜⬜\n";
        cout << "⬜⬜⬛🟨⬛🟨⬛🟨🟨🟨⬛🟨⬛⬛🟪⬛⬛⬜⬜⬜⬜⬜\n";
        cout << "⬜⬛🟨⬛⬛⬛🟥⬛⬛⬛🟦⬛⬛🟪⬜🟪⬛⬛⬜⬜⬜⬜\n";
        cout << "⬜⬛⬛🟧⬛🟥⬜🟥⬛🟦⬜🟦⬛🟪🟪🟪⬛⬜⬛⬜⬜⬜\n";
        cout << "⬜⬛🟧⬜⬛🟥🟥🟥⬛🟦🟦🟦⬛⬛🟪⬛⬛🟨🟨⬛⬜⬜\n";
        cout << "⬜⬛⬛🟧⬛⬛🟥⬛🟨⬛🟦⬛🟨🟨⬛🟨⬛🟨🟨🟨⬛⬜\n";
        cout << "⬜⬛🟨⬛🟨🟨⬛🟨🟨🟨⬛🟨🟨🟨🟨🟨🟨⬛🟨⬛⬛⬛\n";
        cout << "⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜🟩⬛\n";
        cout << "⬜⬛🟨🟨🟨🟨🟨🟨🟨⬛⬛🟨🟨🟨🟨🟨🟨🟨⬛🟩🟩⬛\n";
        cout << "⬜⬛🟨🟨🟨🟨🟨🟨⬛⬜⬜⬛🟨🟨🟨🟨⬜🟨🟨⬛🟩⬛\n";
        cout << "⬜⬜⬛🟨🟨🟨🟨⬛🟨⬜⬜⬜⬛🟨🟨🟨🟨🟨🟨⬛⬛⬜\n";
        cout << "⬜⬜⬛🟨🟨🟨🟨⬛🟨🟨🟨⬜⬛🟨🟨⬜🟨🟨🟨⬛⬜⬜\n";
        cout << "⬜⬜⬛🟨🟨🟨🟨🟨⬛🟨🟨⬛🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜\n";
        cout << "⬜⬜⬜⬛🟨🟨🟨🟨🟨⬛⬛🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜\n";
        cout << "⬜⬜⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜\n";
        cout << "⬜⬜⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨⬛⬛⬛⬛⬜⬜⬜⬜⬜⬜\n";
        cout << "⬜⬜⬜⬜⬛🟨🟨🟨⬛⬛⬛⬛🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜\n";
        cout << "⬜⬜⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜⬜\n";
        cout << "⬜⬜⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜⬜\n";
        cout << "⬜⬜⬛🟨🟨🟨⬜🟨🟨🟨🟨🟨🟨🟨⬜🟨🟨⬛⬜⬜⬜⬜\n";
        cout << "⬜⬜⬛🟨🟨⬜🟨🟨🟨🟨🟨🟨🟨🟨🟨⬜🟨🟨⬛⬜⬜⬜\n";
        cout << "⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨⬜🟨🟨🟨🟨🟨🟨🟨⬛⬜⬜⬜\n";
        cout << "⬜⬛🟨⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛🟨⬛⬜⬜\n";
        cout << "⬛🟨🟨⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨🟨⬛🟨🟨⬛⬜\n";
        cout << "⬜⬛⬛🟨🟨🟨🟨🟨🟨⬛⬛⬛⬛🟨🟨🟨🟨🟨⬛⬛⬜⬜\n";
        cout << "⬜⬜⬜⬛⬛⬛🟨🟨⬛🟨🟨🟨⬛🟨🟨🟨⬛⬛⬜⬜⬜⬜\n";
        cout << "⬜⬜⬜⬜⬜⬜⬛⬛🟨🟨🟨🟨🟨⬛⬛⬛⬜⬜⬜⬜⬜⬜\n";
        cout << "⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛⬛⬛⬛⬜⬜⬜⬜⬜⬜⬜⬜⬜\n";
        cout << "Suddenly, THANOS appears and steals all infinity to fullfill his destiny!" << endl;
        cout << "Finally, I have all stones. This world will be better if people like you disappear. I will delete you all. HAHAHAHA" << endl;
  }
}

void boss::bossStats(boss b){
    std::cout << "***********************************************" << std::endl;
    std::cout <<  b.getName() << "'s Health: "<< getH() << std::endl;
    std::cout << "***********************************************" << std::endl;
}



#endif