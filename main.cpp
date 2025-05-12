//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

// NOTE: BUBBLE SHOULD BE THE SLOWEST AND INSERTION IS THE FASTEST

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <chrono>
#include <vector>
#include <algorithm>
using namespace std;
#include "sorting.h"


int main(int argc,char* argv[]){

    //protocal for not enough inputs
    if(argc < 3){
        cout << "Error there is not enough inputs!" << endl;
        return 1;
    }

    int n = argc-2;
    int *p = new int[n];

    int move=0;

    string method =argv[1];

    for (int i=0; i<n;i++){
        *(p+i) = atoi(argv[i+2]);
    }

    // starting time
    auto start = std::chrono::high_resolution_clock::now();

    if(method == "bubble"){
        bubbleSort(p,n,move);
        cout << "USING BUBBLE SORTING: ";
    }
    else if(method == "insertion"){
        insertionSort(p,n,move);
        cout << "USING INSERTION SORTING: ";
    }
    else if (method == "selection"){
        selectionSort(p,n,move);
        cout << "USING SELECTION SORTING: ";
    }
    else if (method == "counting"){
        countingSort(p,n,move);
        cout << "USING COUNTING SORT: ";
    }
    else{
        cout << "The sorting method that you inputed is unknown!" << endl;
        return 1;
    }

    //Ending time
    auto end = std::chrono::high_resolution_clock::now();

    //Calculate the comsumption time
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    //display the sorted array and the amount of moves
    display(p,n,move,method);

    //convert ns to ms
    double sorting_time = duration.count() * 0.000001;
    cout << "Time taken : " << sorting_time << " ms" << endl; 

    delete[] p;
    return 0;
}
