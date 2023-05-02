#include <iostream>
using namespace std;
int main() {
    int space, rows;
    cout <<"Enter number of rows: ";
    cin >> rows;
    for(int i = 1, val = 0; i <= rows; ++i, val = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<"  ";
        }
        while(val != 2*i-1) {
            cout << "* ";
            ++val;
        }
        cout << endl;
    }    
    return 0;
}
