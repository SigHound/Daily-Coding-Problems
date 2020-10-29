//1.2

#include <iostream>

int main(){
    int myArraySize = 5;
    int myArray[] = {1,2,3,4,5};
    int newArray[myArraySize];
    for (int i = 0; i < myArraySize; i++){
        newArray[i] = 1;
        for (int j = 0; j < myArraySize; j++){
            if(i != j){
                newArray[i] *= myArray[j];
            }
        }
    }
    for (int i = 0; i < myArraySize; i++){
        std::cout << newArray[i] << std::endl;
    }
}