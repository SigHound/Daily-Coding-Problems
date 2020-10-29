#include <iostream>

int main(){
    int CONST SIZE;
    int myArray[SIZE];
    int newArray[SIZE];
    for (int i = 0; i < SIZE; i++){
        newArray[i] = 1;
        for (int j = 0; j < SIZE; j++){
            if(i != j){
                newArray[i] *= myArray[j];
            }
        }
    }
    for (int i = 0; i < SIZE; i++){
        std::cout << newArray[i] << std::endl;
    }
}
