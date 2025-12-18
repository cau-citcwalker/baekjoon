#include <iostream>

using namespace std;

int main() {
    unsigned int a, result = 0;
    cin >> a;
    for(unsigned int i = 1; i <= a; i++) {
        result += i;
    }
    cout << result << endl;
    return 0;
}