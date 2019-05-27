#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    std ::ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    int c, d, l;
    unsigned int minLegs, maxLegs;
    while (tests--) {
        cin >> c >> d >> l;
        minLegs = 4 * (d + max(0, c - 2 * d));
        maxLegs = 4 * (c + d);
        if (l % 4 == 0) {
            if (l >= minLegs and l <= maxLegs)
                cout << "yes\n";
            else
                cout << "no\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
