#include<iostream>

int main(){
    using std::cout;
    using std::cin;

    int a;

    do {
        cout << "enter a positive number: ";
        cin >> a;

    } while (a<0);  // do while loop executes the block once and then repeats if while condition is met

    cout << "the number is " << a;
    return 0;
}