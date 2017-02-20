//============================================================================
// Name        : HigherOrderFunctions.cpp
// Author      : Patryk Bołoz
//============================================================================
#include <iostream>
#include <vector>
using namespace std;


template<typename T>
vector<T> filter(bool (*compare)(T element, T comparator), vector<T> inputVector){
    vector<T> myVector;
    for(typename vector<T>::iterator it = inputVector.begin(); it != inputVector.end(); it++){
        if (compare(*it,'c')){
            myVector.push_back(*it);
        }
    }
    return myVector;
}

template<typename T>
bool compare(T element, T comparator){
    return element < comparator ? false:true;
}



int main() {

	return 0;
}
