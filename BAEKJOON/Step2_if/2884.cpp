#include <iostream>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;
    
    int t;
    t = (H*60+M) - 45;
    if (t<0){
        H = 23;
        M = 60+t;
        cout<< H<<" "<< M <<endl;
    }
    else {
        H = t/60;
        M = t%60;
        cout<< H<<" "<< M <<endl;  
    }
}