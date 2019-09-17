#include <iostream>
#include <vector>
#include<cassert>
using namespace std;

// print the values of two variables
void print_values(int num1, int num2) {
    cout << "Value of num1 is: " << num1 << endl;
    cout << "Value of num2 is: " << num2 << endl;
}
// swap values of two variables
void swap(int& num1, int& num2) {
    cout<<"Swap function"<<endl;

    int* numPtr = &num1;
    int* numPtr2 = &num2;
    int temp = num1;
    *numPtr = num2;
    *numPtr2 = temp;
}

int main() {

    int num1 = 10;
    int num2 = 20;
    int temp=num1;
    cout << "Before Swapping: " << endl;
    print_values(num1, num2); // function call
    swap(num1, num2); // swap values?
    cout << "After Swapping: " << endl;
    print_values(num1, num2); // function call

}
