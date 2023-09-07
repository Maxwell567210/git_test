#include <iostream>

using namespace std;

void printArr(int* array, int size);

int main(){
	const SIZE = 20;
	int array[size];
	
	printArr(array, size);
}

void printArr(int* array, int size){
	for(int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
}
