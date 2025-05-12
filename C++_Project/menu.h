#ifndef MENU_H
#define MENU_H

// WARNING THIS CODE WILL END THE PROGRAM
void EndProgram(){
  exit(0);
}

void printTitle(){
  cout<< "\033[1;33m  _____      _                           _  __     _        _    _      _____      _                _    \033[0m\n";
  cout<< "\033[1;33m |  __ \\    (_)                         | |/ /    | |      | |  | |    |  __ \\    | |              | |   \033[0m\n";
  cout<< "\033[1;33m | |__) | __ _ _ __   ___ ___  ___ ___  | ' / __ _| |_ __ _| | _| | __ | |__) |__ | | ___ __   ___ | | __\033[0m\n";
  cout<< "\033[1;33m |  ___/ '__| | '_ \\ / __/ _ \\/ __/ __| |  < / _` | __/ _` | |/ / |/ / |  ___/ _ \\| |/ / '_ \\ / _ \\| |/ /\033[0m\n";
  cout<< "\033[1;33m | |   | |  | | | | | (_|  __/\\__ \\__ \\ | . \\ (_| | || (_| |   <|   <  | |  | (_) |   <| |_) | (_) |   < \033[0m\n";
  cout<< "\033[1;33m |_|   |_|  |_|_| |_|\\___\\___||___/___/ |_|\\_\\__,_|\\__\\__,_|_|\\_\\_|\\_\\ |_|   \\___/|_|\\_\\ .__/ \\___/|_|\\_\\ \033[0m\n";
  cout<< "\033[1;33m                                                                                       | |               \033[0m\n";
  cout<< "\033[1;33m                                                                                       |_|               \033[0m\n";
}

void menu(){
  cout<< "========MENU========"<<endl;
  cout<<"    1. START GAME    "<<endl;
  cout<<"    2. EXIT        "<<endl;
}

bool choose(bool &gameRunning) {
  int choice;
  bool validChoice = false;
  do {
      cout << "\033[1;32mPlease select: \033[0m";
      cin >> choice;
      switch(choice){
          case 1:
              cout << "Starting game..." << endl;
              gameRunning = true;
              validChoice = true;
              break;
          case 2:
              cout << "Exiting the game..." << endl;
              validChoice = true;
              EndProgram();
              break;
          default:
              cout << "Invalid choice. Please try again." << endl;
              break;
      }
  } while (!validChoice);
  return gameRunning;
}

#endif