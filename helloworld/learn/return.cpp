#include<iostream>
using std::cout;
using std::cin;
double area (double length);
double cube ( double length);
int main(){
    double length;
    cout << "enter the length of the sqaure: ";
    cin >> length;
    double areaa = area(length);
    cout << "the area is "<< areaa << "cm^2\n";
    double volume = cube(length);
    cout << "the volume of the cube is " << volume << "cm^2 \n";



    return 0;
}
/*double area (double length){
    double result = length * length;
    return result;
} 
OR                                                                                          */ 

double area (double length){
    return length*length;
}

double cube ( double length){
    return length * length * length;
}
