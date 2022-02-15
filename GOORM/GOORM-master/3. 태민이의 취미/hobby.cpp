// 태민이의 취미
#include <iostream>
using namespace std;
unsigned long long  vol, n;
int main() {
   
   cin >> n;
    
   vol =  ((n * (n + 1) / 2)) % 1000000007;
   vol = vol * vol % 1000000007;
 
   cout << vol << '\n';
   return 0;
}
