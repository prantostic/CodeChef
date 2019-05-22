#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int tests;
    cin >> tests;
    int n, c;
    int sum;
    int num;
    while (tests--) {
        cin >> n >> c;
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> num;
            sum += num;
        }
        if(sum <= c)
            cout << "Yes" << "\n";
        else
            cout << "No" <<"\n";
    }
    cout << endl;
    return 0;
}
