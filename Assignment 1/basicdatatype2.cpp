#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    long number2;
    char value;
    float number3;
    double number4;
    cin>>number>>number2>>value>>number3>>number4;
    
    std::cout<<number<<std::endl;
    std::cout<<number2<<std::endl;
    std::cout<<value<<std::endl;
    
    cout<<fixed<<setprecision(3)<<number3<<endl;
    cout<<fixed<<setprecision(4)<<number4<<endl;
    return 0;
}
