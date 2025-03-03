#include<iostream>
#include<vector>


/*typedef std::vector<std::pair<std::string,int>> pairlist_t;
typedef is used to give a nickname to a datatype to make it easy to mention
typedef std::string text_t;*/
using text_t = std::string;

int main(){
    using std::cout;
    text_t a = "bruh";
    cout << a;

}