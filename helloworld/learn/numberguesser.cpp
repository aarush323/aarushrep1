#include <iostream>
int main(){
    using std::cout;
    using std::cin;
    int limit, guess, guesses = 0;
    
    cout << "enter the highest limit of the number: ";
    cin >> limit;
    srand(static_cast<unsigned int>(time(0)));
    int num = (rand () % limit) + 1;
    

    do{
        cout << " \n the guess is ( press 0 to quit): ";
        cin >> guess;
        guesses++;
        if (guess == num){
            cout << "correct guess!!! you guessed the number  " << guess << "in " << guesses << "turns";
            break;
        }
        else if (guess > num){
            cout << "wrong guess! Guess lower \n";
            
        }
        else if (guess < num){
            cout << "wrong guess! Guess higher \n";
            
        }
    
    }while ( guess != 0);

}