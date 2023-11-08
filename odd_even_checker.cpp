#include <iostream>

using namespace std;

int main(){

    cout << "Enter a number: ";
    int a;
    cin >> a;
    if (a % 2){
        cout << a << " is an odd number!"; 
    } else {
        cout << a << " is an even number!";
    }
    return 0; 
}