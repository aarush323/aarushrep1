#include<iostream>
using std::cout;
using std::cin;

void Happybirthday(std::string name, int age);

int main(){
    std::string name;
    int age;
    using std::cout;
    using std::cin;
    cout << "enter your name! ";
    cin >> name;
    cout << "enter your age! ";
    cin >> age;
    Happybirthday(name, age);
    return 0;

}
void Happybirthday(std::string name, int age){
    cout << "happy birthday to you"<<'\n';
    cout << "happy birthday dear " << name << '\n';
    cout << "happy birthday to you"<<'\n';
    cout << "you are " << age << " years old ";
}
    

    
