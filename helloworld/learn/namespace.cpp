    #include<iostream>
    namespace first{
        int x=3;
    }
    namespace second{
        int x=4;
    }

    int main(){
        using std::cout;
            /* OR
            using namespace first;
            cout << x; */

        

            cout << first::x;






    }