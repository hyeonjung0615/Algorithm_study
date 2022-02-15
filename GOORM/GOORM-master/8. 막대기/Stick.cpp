#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int* arr = new int[N];


    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int count = 1;

    for (int j = N - 1; j >= 0; j--) {
        if (arr[N - 1] < arr[j]) {
            arr[N - 1] = arr[j];
            count++;
        }
    }

    cout << count << endl;

    delete[] arr;
}