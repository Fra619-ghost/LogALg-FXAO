#include <iostream>

using namespace std;

int main() {
    cout << "Números impares en orden descendente entre 1 y 100:" << endl;
    
    
    for (int i = 100; i >= 1; i--) {
        
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    
    cout << endl;

    return 0;
}
