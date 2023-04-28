#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "p\tq\tp -> q\tq -> r\tp -> r\n";
    cout << "--------------------------------------------------\n";
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            string p = (i == 0) ? "false" : "true";
            string q = (j == 0) ? "false" : "true";
            string p_implies_q = (i == 0 || j == 1) ? "true" : "false";
            string q_implies_r = (j == 0 || j == 1) ? "true" : "false";
            string p_implies_r = (i == 0 || j == 1) ? "true" : "false";
            cout << p << "\t" << q << "\t" << p_implies_q << "\t\t" << q_implies_r << "\t\t" << p_implies_r << endl;
        }
    }
    return 0;
}

