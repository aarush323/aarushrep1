#include<iostream>
// condition ? expression1(executed if T) : expression2 ( executed if F);

/* && = and
   || = Or
   ! = not?

    bool sunny = false ;
    if ( !sunny){
        std::cout << "it is cloudy";

    }
    else {
        std::cout << "it is sunny";
     }
    return 0;
   */

  int main(){
    using std::cout;
    
    std::string name;
    cout << "enter your name: ";
    std::getline(std::cin, name);

    cout << "Your username is:" << name.append("@gmail.com") << "\n";
    cout << "First letter is:" << name.at(0) << "\n";

    name.clear();
    cout << "Name is: " << name << "\n";

   return 0;
  }