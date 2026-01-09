#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>
using namespace std;


int main() {
    int T;
    cin >> T;
    
    while(T--){
        double A, B, C;
        cin >> A >> B >> C;
        
        cout << left << showbase << nouppercase << hex << setw(15) << (long long)A << endl;
        
        cout << right << fixed << setprecision(2) << showpos << setfill('_') << setw(15) << B << endl;
        
        cout << uppercase << scientific << setprecision(9) << noshowpos << setfill(' ') << C << endl;
        
        cout << dec;
    }
    
    return 0;
}
