#include <iostream>
using namespace std;
bool asal(int n);


int main() {
    int a;
    long long sum = 0;

    cout << "Hangi sayiya kadar olan asal sayilari toplamak isiyotsun :";
    cin >> a;

    for (int i = 2; i <= a; i++) {

        if (asal(i) == true) {
            sum += i;
      }

    }

    cout << sum << endl;

}

bool asal(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}