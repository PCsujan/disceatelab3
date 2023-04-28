#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "p\tq\tp v q\t(p & q)\t~(p & q)\n";
    cout << "----------------------------------------------\n";
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            string p = (i == 0) ? "false" : "true";
            string q = (j == 0) ? "false" : "true";
            string pvq = (i == 0 || j == 0) ? "false" : "true";
            string p_and_q = (i == 1 && j == 1) ? "true" : "false";
            string not_p_and_q = (i == 0 || j == 0) ? "true" : "false";
            cout << p << "\t" << q << "\t" << pvq << "\t\t" << p_and_q << "\t\t" << not_p_and_q << endl;
        }
    }
    return 0;
}

