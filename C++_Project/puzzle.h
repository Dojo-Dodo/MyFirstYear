#include <iostream>
#include <ctime>
#include <cstdlib>

void generateRandomNumbers(int arr[], int size) {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100 + 1; // Generate a random number between 1 and 100
    }
}

void printGenerateNum(int arr[],int size){
    std::cout << "->You approaches a mysterious ancient door..." << std::endl;
    std::cout << "\"Small -> big\" wrote on the door..." << std::endl;
    std::cout << "Puzzle numbers: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                //Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void checkAnswer(int arr[],int size){
    for(int i=0; i<size; i++){
        int answer;
        bool correct;
        do{
            correct=false;
            std::cout << "#number " <<  i+1 << ": ";
            std::cin >> answer;
            if(arr[i]==answer){
                correct = true;
            }
            else{
                std::cout << "WRONG ANSWER, do it again" << std::endl; 
            }
        }while(!correct);
    }
    std::cout << "-> YOU PASS THE PUZZLE!" << std::endl;
}

