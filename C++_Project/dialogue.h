#include <iostream>
#include "menu.h"
#include "player.h"
#include "boss.h"

void TheEnd(){
  std::cout << "\033[1;31m  ████████████████████████████████████████████████████████████  " << std::endl;
  std::cout << "██                                                            ██" << std::endl;
  std::cout << "██              ██████    ██      ██    ██████                ██" << std::endl;
  std::cout << "██              ██        ████    ██    ██    ██              ██" << std::endl;
  std::cout << "██              ██████    ██  ██  ██    ██    ██              ██" << std::endl;
  std::cout << "██              ██        ██    ████    ██    ██              ██" << std::endl;
  std::cout << "██              ██████    ██      ██    ██████                ██" << std::endl;
  std::cout << "██                                                            ██" << std::endl;
  std::cout << "  ████████████████████████████████████████████████████████████  \033[0m\n" << std::endl;
}

void dead(){
    std::cout << "-> You accepts the fate, knowing that you wouldn't make it...\n" << std::endl;
    std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣷⣿⣿⣿⣿⣿⠿⠿⠷⣚⢒⢋⠛⡍⡛⣙⠋⡟⢛⠯⠟⡿⣿⣯⢿⣟⢿⣽⣃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" <<std::endl;
    std::cout << "⠀⠀⠀⠀⠀⠀⢀⣴⣾⣿⣿⡿⢟⠫⡉⠔⡈⠆⠱⡀⠎⠄⠣⢐⠡⠄⠣⠌⢢⠘⡠⠑⠤⡉⠷⠿⣟⣾⣽⢳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀" <<std::endl;
    std::cout << "⠀⠀⠀⠀⣠⣾⣿⢿⣿⠟⡉⠔⡈⢆⠡⠘⠄⠡⢂⠐⡈⠄⠡⠂⠄⠃⠌⠰⠀⠆⠡⢉⠰⢀⠣⠘⢌⠹⠿⣿⣟⣻⣦⡀⠀⠀⠀⠀⠀⠀" <<std::endl;
    std::cout << "⠀⠀⣠⣾⠋⣹⡾⠟⡠⢊⠜⠡⠈⠄⢂⠡⣈⠄⡀⠂⠐⠈⡀⢐⣀⣈⣀⠂⠁⡈⠐⡀⢂⠂⣁⠊⡐⠢⠡⠌⢛⢿⣿⣽⣦⡀⠀⠀⠀⠀" <<std::endl;
    std::cout << "⢀⣴⡟⢡⣿⠛⡅⣃⠆⣡⢂⣡⣬⣶⣾⣿⣿⣷⡄⠈⠠⠁⢸⣿⣿⣿⢿⣿⣿⣶⣦⣤⣄⠠⢀⠂⠡⠐⡁⠎⠰⡈⠲⣹⢲⡱⠄⠀⠀⠀" << std::endl;
    std::cout << "⣻⠏⣠⡿⢃⠭⡰⠄⢊⢼⣿⣿⣿⣿⡿⠟⠋⠁⠀⠄⠡⠐⢀⠈⠉⠛⠻⢿⣾⣯⣿⣿⡟⠀⠄⡈⠄⠡⠐⡈⠅⠰⡁⢢⡙⡴⠈⢀⠀⠀" << std::endl;
    std::cout << "⣿⣤⣿⢃⠞⡄⢣⡐⠌⠼⣿⡿⠟⢋⠁⠄⡠⠄⠂⠄⢂⠐⡈⠄⠠⢀⠀⠈⠉⠙⠛⠋⢁⠐⠠⢁⠰⢀⠂⠡⢐⠂⢡⠊⢡⠓⣆⠈⠆⠀"<< std::endl;
    std::cout << "⣿⣿⠏⣌⠲⣉⠒⡌⣜⡰⢄⡒⠌⠤⠘⢠⠐⠠⠈⠄⢂⠰⠀⠌⡐⠄⣈⠂⠡⠌⢠⠁⢆⡈⠒⡈⠐⠤⢈⢂⠰⠈⡄⠊⠤⡙⡘⣆⠀⣇"<< std::endl;
    std::cout << "⣻⡿⠱⣨⠱⣈⠳⣼⡿⡓⢬⠐⠌⠠⠉⠄⡈⠄⣁⠂⠄⢣⠌⡐⡀⠆⠠⠈⠔⡈⠄⢊⠤⣈⢑⠢⣉⠐⠄⡂⡐⠡⡀⢃⠒⢠⠓⡜⡆⠺"<< std::endl;
    std::cout << "⣿⣏⡑⢦⢑⠢⣽⣿⢧⡙⢄⠊⠄⠁⡐⠀⠁⠌⡠⢌⠐⢢⠜⡠⠁⠌⠐⠀⠠⠐⠈⡐⠢⡐⢊⡕⢢⢍⡐⡐⢈⠔⠠⢡⠈⠆⡱⠸⣭⢓"<< std::endl;
    std::cout << "⣿⡧⣘⠲⡌⢣⣿⣟⢦⣉⣦⡾⠶⠟⠶⠶⢮⣤⣐⠄⢊⣼⣇⣴⠷⠾⠛⠛⠻⠶⢶⣤⣅⡰⣁⢎⡱⢎⡔⢨⠐⡨⠐⢂⠌⢒⠐⡣⣝⣾"<< std::endl;
    std::cout << "⣿⡗⢤⠛⢤⢃⣿⣿⡶⣟⣻⣶⡆⡤⢀⠀⠀⠀⠙⠻⣦⣿⣋⢷⣺⣦⣕⡠⢀⢀⠀⡀⠉⠛⢛⠾⢷⣿⡮⠐⡌⠰⠁⡌⠢⢁⠊⠴⣹⢦"<< std::endl;
    std::cout << "⣿⣏⠦⡙⢂⡃⢿⣏⣿⢾⣿⣿⣿⣷⣧⡘⠤⣁⠢⢡⣹⣷⡿⣿⣿⣿⣿⣿⣆⠎⡰⢀⢣⢉⠦⣙⣾⡟⡡⠃⢌⡑⢂⠰⢁⠎⢌⡱⢭⡷"<< std::endl;
    std::cout << "⣿⣯⡒⡡⢃⡇⠎⢿⣞⢿⡿⣿⣿⣿⣿⠟⡴⢢⡱⣦⡟⡙⣿⣻⣿⣿⣿⣿⣏⢧⡱⣉⢦⣋⣾⣿⠏⣴⢃⠩⣀⠒⠄⡱⠈⡔⠢⡜⣣⡟"<< std::endl;
    std::cout << "⣿⣿⣧⠑⣌⠲⣉⠎⡻⣯⣝⢿⣯⣻⣭⣻⣼⣷⠟⡫⢔⠱⢺⣿⣻⣿⣯⣵⣎⣶⣳⣽⣮⡿⠟⣡⢞⢃⠢⢑⠠⠃⡌⢄⠣⢌⠱⣜⡳⣿"<< std::endl;
    std::cout << "⣿⡿⣿⡇⡰⢃⠖⣨⠱⣘⢻⢳⢮⣍⡹⢭⡙⡤⢋⠴⡉⠦⠡⢌⡙⠶⢩⡉⣍⢋⡙⣉⠡⡴⠞⡃⠎⡄⢣⠈⢆⠱⣀⠊⡔⢨⠲⣥⡟⣧"<< std::endl;
    std::cout << "⢿⣷⣿⣷⢡⢃⡚⢄⠣⡜⣌⠳⣊⠖⣍⠲⡱⢈⠣⡘⠄⡃⠍⡐⡈⠆⢡⠒⠌⣂⠒⡌⠱⡐⢣⢉⠒⡈⠤⠑⣈⠢⠄⢣⠘⣢⢛⡶⢏⣲"<< std::endl;
    std::cout << "⢾⢹⡯⣿⣧⡒⢌⡂⢇⠲⢌⡓⣌⠚⣄⢣⠰⡁⢆⠡⠌⡐⠐⡠⠐⡈⠄⡈⠐⡀⠒⡈⠡⠌⠄⡂⠜⠠⡁⠎⡀⢆⡉⢆⡹⢰⢯⡞⠀⣏"<< std::endl;
    std::cout << "⠈⠨⣷⣹⣿⣧⡘⢥⡘⢤⢊⡱⢉⡒⠩⠌⢂⠡⢈⡐⠠⢁⠂⡁⢂⠡⢀⠡⢂⠁⡂⢁⠂⡐⠠⢁⠰⠠⢁⠂⡱⢈⡱⢌⢣⣞⡾⠁⣰⠉"<< std::endl;
    std::cout << "⠀⠀⠉⢿⣦⣿⣿⣘⣿⠳⡶⢷⡾⢶⣷⣼⣦⣵⣦⣤⣣⣤⣆⣴⣀⣦⣀⣆⣄⣢⣐⣄⣢⣄⣡⢂⡤⣁⢦⠱⢦⠃⢦⣩⣶⡟⣀⡞⠁⠀"<< std::endl;
    std::cout << "⠀⠀⠀⠀⠈⠻⠿⣯⡿⣿⣿⣷⣾⣵⡌⢦⡉⠜⡈⠥⢉⠃⡉⢃⠩⠌⠩⠘⡈⠡⠉⠤⡁⢆⣄⣣⣰⣤⣆⣶⢦⣽⣶⣿⢟⡿⠋⠀⠀⠀"<< std::endl;
    std::cout << "⠀⠀⠀⠀⠀⠀⠀⠈⠷⢻⣍⠻⣯⣟⡿⣿⢿⣷⣼⣴⣌⣦⣥⣆⣦⣜⣤⣧⣼⣥⣿⣶⢿⠿⣞⢿⡹⢯⣝⣾⡿⣟⣱⡿⠋⠀⠀⠀⠀⠀"<< std::endl;
    std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⣿⣯⣩⡟⣯⣟⡾⣽⣻⣟⣿⣻⢿⣟⣿⢻⡟⣯⢟⣮⢳⣏⠿⣜⣧⣿⣷⣿⣿⣶⠿⠛⠁⠀⠀⠀⠀⠀⠀"<< std::endl;
    std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⣈⣟⣷⣾⣿⣋⣻⣿⣟⣻⣷⠿⢞⣾⣯⣽⡾⠻⢞⣷⣏⣻⣿⣅⣾⣷⣶⣻⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀"<< std::endl;
    EndProgram();
}

bool Entrance(bool Enter){
  char answer[3];
  bool validAnswer;
  std::cout << "==================================================================" << std::endl;
  std::cout << "| The eternal stones on Thanos' glove have been dispersed to the |" <<std::endl;
  std::cout << "| four element monsters. You need to collect infinity gems from  |" << std::endl;
  std::cout << "| these monster before thanos did and save the world!            |" << std::endl;
  std::cout << "| Do accept this mission, Brave traveler? (y/n)                  |" << std::endl;
  std::cout << "==================================================================" << std::endl;
  
  do{
    std::cin >> answer;
    if(answer[0] == 'y' || answer[0] == 'Y'){
      Enter = true;
      validAnswer = true;
    }
    else if(answer[0] == 'n' || answer[0] == 'N'){
      std::cout << "-> You reject the mission and runaway... What a coward you are..." << std::endl;
      Enter = false;
      validAnswer = true;
      TheEnd();
      EndProgram();
    }
    else{
      std::cout << "\033[1;31mInvalid answer. Please try again.\033[0m" << std::endl;
      validAnswer = false;
    }
  }while(!validAnswer);

  return Enter;
  
}

void bossAttack(player &p, boss b){
    cout << "\n\n\n\n";
    if(b.getH()>0){
        cout << "# " << b.getName() << " attacks player with " << b.getA() << " damage!" << endl;
        p.setH(p.getH() - b.getA());
    }
    
}

void win(player p){
    cout <<"->" <<  p.getName() << ": \"Hey Thanos, Looks I didn't use any new resorce.\"\n" << endl;
    cout <<"->" <<  p.getName() << ": \"This recycled sword still beat you up.\"\n" << endl;
    cout <<"->" << "THANOS : *dead*" << endl;
    cout << "!!! " << p.getName() << " just save the world !!!" << endl;
    TheEnd();
}