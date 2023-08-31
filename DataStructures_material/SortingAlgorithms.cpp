#include <iostream>
#include <vector>
#include <cmath>



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

//Swap Sort
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



void selectionSort(vector <int> list){
    int compararisons = 0;
    int changes = 0;
    int size = list.size();
    int min;
    //iterates in list index
    for(int i = 0; i<size -1; i++){
        min = i;
        //compares all values searching for minor value and assigning it to index i
        for(int j = i; j-size; j++){
            compararisons++;
            if(list[min]> list[j]){
                changes++;
                swap(list, min,j);
            }
        }
    }

    cout<<endl<< "-------Selection Sort"<<endl;
    printList(list);
    cout<<"Comparisons: "<< compararisons<<endl;
    cout<<"Swaps: "<< changes<<endl;
}

void insertionSort(vector <int> list){
    int compararisons = 0;
    int changes = 0;
    int size = list.size();

    int element;

    for(int i = 0; i < size-1; i++){
        element = i+1;
        compararisons++;
        while(list[element] < list[element-1] && element > 0){
            compararisons++;
            changes++;
            swap(list, element,element-1);
            element--;
        }
    }

    cout<<endl<< "-------Insertion Sort"<<endl;
    printList(list);
    cout<<"Comparisons: "<< compararisons<<endl;
    cout<<"Swaps: "<< changes<<endl;
}

void shellSort(vector <int> list){
    int compararisons = 0;
    int changes = 0;
    int size = list.size();
    int gap = floor(size/2);
    bool noChange = true;

    while(gap > 0){
        noChange = true;

        //iterate through list comoparing with gap instead of adjecent
        for(int i = gap; i<size; i++){
            compararisons++;
            if(list[i] < list[i-gap]){
                noChange = false;
                changes++;
                swap(list,i,i-gap);
            }
        }
        //if there wasnt a swap change the gap
        if(noChange){
            gap= floor(gap/2);
        }

    }


    cout<<endl<< "-------Shell Sort"<<endl;
    printList(list);
    cout<<"Comparisons: "<< compararisons<<endl;
    cout<<"Swaps: "<< changes<<endl;
}

int main(){
    //create random vector
    vector<int> list;
        srand((unsigned)time(NULL));
        int a = rand() % 20 + 1; //1 to 20
        for (int i =0; i < a; i++){
                int b = rand() % 20 + 1;
                list.push_back(b);
            }


    //vector <int> list = {8,5, 23, 22,2,10};
    cout<<"Unorganaized list: ";
    printList(list);

    bubbleSort(list);

    swapSort(list);

    selectionSort(list);

    insertionSort(list);

    //quickSort
    //Megre Sort

    shellSort(list);
    return 0;

}