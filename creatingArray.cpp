#include <iostream>
using namespace std;

int creatingArray(int x){
    int n, arr[50];
    for(int i=0; i<x; i++){
        cout << "Enter the number:";
        cin >> n;
        arr[i] = n;
    }
    return arr;
}
int main(){
    int arr1;
    arr1 = creatingArray(5);
    cout << arr1;
}