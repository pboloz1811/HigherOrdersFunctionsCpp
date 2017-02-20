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

template<typename T>
T combinator(T accumulator, T current){
	return accumulator + current;
}

template<typename T>
T reduce(T initialValue,T (*combine)(T accumulator, T current),vector<T> inputVector){
	T summaryValue = initialValue;
	for(typename vector<T>::iterator it = inputVector.begin(); it != inputVector.end(); it++){

		summaryValue = combine(summaryValue,*it);
	}
	return summaryValue;
}

template<typename T>
T transform(T element){
	return element * element;
}


template<typename T>
vector<T> map(T (*transform)(T element), vector<T> inputVector){
	vector<T> myVector;
	for(typename vector<T> ::iterator it = inputVector.begin(); it != inputVector.end(); it++){
		myVector.push_back(transform(*it));
	}
	return myVector;
}



int main() {

	vector<int> wektor;
	wektor.push_back(1);
	wektor.push_back(2);
	wektor.push_back(3);
	wektor.push_back(4);
	wektor.push_back(5);
	cout << reduce(1,&combinator,wektor) << endl;




}
