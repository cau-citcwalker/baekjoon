#include <iostream>

using namespace std;

int main() {
    unsigned int count = 0, result = 0, one = 0;
    cin >> one;
    cin >> count;
    for(int i = 0; i < count; i++) {
        unsigned int c = 0, p = 0;
        cin >> c;
        cin >> p;
        result += c * p;
    }
    if(result == one) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
