#include <iostream>
using namespace std;

int myArray[] = {1,2,3,4, 77, 88};

void coutArr(int *arr, int size){
   for(int i=0; i<size/4; i++){
      cout << arr[i] << endl;
   }
}

int main(){
   coutArr(myArray, sizeof(myArray));
}