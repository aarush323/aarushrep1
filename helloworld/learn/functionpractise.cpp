#include<iostream>
using std::cout;
using std::cin;
using std::string;

string name(string name1, string name2);
int main(){
    string firstname, lastname;
    cout<< "enter your first and last name with a space in between: ";
    cin >> firstname  >> lastname;
    cout <<"first name is "<<  firstname << '\n';
    cout <<"last name is "<< lastname << '\n';
    string finalname = name(firstname, lastname);
    cout << " your name is " << finalname;

    return 0;
    

}
string name(string name1, string name2){
    return name1 + " " + name2;
}