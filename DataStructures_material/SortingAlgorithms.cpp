#include <iostream>
#include <vector>

using namespace std;

// This file will display diferent sorting algorithms and compere their complexity and efficiency on diferent cases

// Base functions to reduce code

// simple swap function
void swap(vector <int> &list, int a, int b){
    int memory = list[a];
    list[a] = list[b];
    list[b] = memory;
}

// print function

void printList(vector <int> list){
    int size = list.size();
    cout<<"{ ";
    for(int i = 0; i < size; i++){
        cout<<list[i]<<", ";
    }
    cout<<"} "<< endl;

}

// Bubble sort

void bubbleSort(vector <int> list){
    int compararisons = 0;
    int changes = 0;
    bool moved = true;
    int size = list.size();

    while (moved){
        moved = false;
        for(int i = 0; i < size-1; i++){
            compararisons ++;
            if (list[i] > list[i+1]){
                changes++;
                swap(list, i, i+1);
                moved = true;
            }
        }
    }
    cout<<endl<< "-------Bubble sort"<<endl;
    printList(list);
    cout<<"Comparisons: "<< compararisons<<endl;
    cout<<"Swaps: "<< changes<<endl;
}

void swapSort(vector <int> list){
    int compararisons = 0;
    int changes = 0;
    int size = list.size();

    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j< size; j++){
            compararisons ++;
            if(list[j] < list[i]){
                changes ++;
                swap(list, i,j);
            }

        }
    }



    cout<<endl<< "-------Swap Sort"<<endl;
    printList(list);
    cout<<"Comparisons: "<< compararisons<<endl;
    cout<<"Swaps: "<< changes<<endl;
}



int main(){
    vector <int> list = {8,5, 23, 22,2,10};
    printList(list);
    bubbleSort(list);

    swapSort(list);

    return 0;

}