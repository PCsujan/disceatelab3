#include <iostream>

using namespace std;

int main() {
    bool p, q;
    cout << "p (hound dog) | q (howl at moon) | p -> q | !q | !p | !p || !q" << endl;
    cout << "--------------|-------------------|--------|----|----|--------" << endl;

    // Generate truth table
    for (int i = 0; i < 4; i++) {
        p = (i >> 1) & 1;
        q = i & 1;

        bool premise1 = p;
        bool premise2 = !q;
        bool conclusion = !p;

        cout << (premise1 ? "T" : "F") << "              | ";
        cout << (premise2 ? "T" : "F") << "                | ";
        cout << (premise1 ? (premise2 ? "T" : "F") : "T") << "      | ";
        cout << (!premise2 ? "T" : "F") << "   | ";
        cout << (!premise1 ? "T" : "F") << "   | ";
        cout << (conclusion ? "T" : "F") << endl;
    }

    return 0;
}


