#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int a;
    int b;
    
    int i;
    
    cin>> a;
    cin>> b;
    
    for(i=a; i <= b; i++){
        
        if (i > 0 && i < 10){
            
            if(1==i) cout<< "one" << endl;
            if(2==i) cout<< "two" << endl;
            if(3==i) cout<< "three" << endl;
            if(4==i) cout<< "four" << endl;
            if(5==i) cout<< "five" << endl;
            if(6==i) cout<< "six" << endl;
            if(7==i) cout<< "seven" << endl;
            if(8==i) cout<< "eight" << endl;
            if(9==i) cout<< "nine" << endl;
        }
        else if (i>9&& i%2==0){
            cout<< "even"<<endl;
        }
        else{
            cout<< "odd"<<endl;
        }
    }
    // Complete the code.
    return 0;
}