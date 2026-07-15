#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> number;
    number.push_back(1); 

    
    for (int i = 0; i < 1000; i++) {
        int carry = 0;
        for (int j = 0; j < number.size(); j++) {
            int val = number[j] * 2 + carry;
            number[j] = val % 10;
            carry = val / 10;
        }
        if (carry) {
            number.push_back(carry);
        }
    }

    
    int sum = 0;
    for (int digit : number) {
        sum += digit;
    }

    cout << "Rakamlar toplami: " << sum << endl;

    return 0;
}