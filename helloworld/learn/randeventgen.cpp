#include<iostream>
#include<ctime>
using std::cout;
int main(){
    srand(time(0)); // uses time to creare random nos
    int randnum = rand() % 5 + 1;
    switch(randnum){
        case 1: cout << "weather is haill";
        break;  
        case 2: cout << "weather is sunny";
        break; 
        case 3: cout << "weather is rainy";
        break; 
        case 4: cout << "theres a sandstorm brewing up";
        break; 
        case 5: cout << "the weather is pleasent and normal";
        break; 
        
    }
        



}