#include <iostream>
using namespace std;

int main() {
   int N;
   cin >> N;
   string OX;

   int score = 0;
   int sum = 0;

   for (int i = 0; i < N; i++) {
      cin >> OX;
      for (int j = 0; j < OX.length(); j++) {
         if (OX[j] == 'O') {
            score++;
            sum += score;
         }
         if (OX[j] == 'X') {
            score = 0;
         }
      }
      cout << sum << '\n';
      sum = 0;
      score = 0;
   }
   return 0;
}