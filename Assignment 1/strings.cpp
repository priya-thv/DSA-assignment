//https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    
    string c= a+b;
    cout<<c<<endl;
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    
    cout<<a<<" "<<b<<endl;
    
    return 0;
}
