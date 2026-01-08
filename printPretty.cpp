#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

char baseTenToSixTeen(int number){
    char result;
    string digit = "0123456789ABCDEF";
    if (number > 9) {
        result = digit[number];
    }else{
        result = number + '0';
    }
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        // A (heximal)
        int A;
        cin >> A;
        string hexaA = "";
        int powerOfSixTeen = 0;
        int coefficient = 0;
        int leftOver = 0;
        do {
            coefficient = (A / pow(16 ,powerOfSixTeen)); 
            if(coefficient >= 16){
                powerOfSixTeen++;
            }else {
                if (powerOfSixTeen == 0) {
                    hexaA += baseTenToSixTeen(coefficient);
                    // cout << A << endl;
                    A = A - coefficient;
                    // cout << A << endl;
                }else {
                    leftOver = A % int(pow(16, powerOfSixTeen));
                    hexaA += baseTenToSixTeen(coefficient);
                    A = leftOver;
                    powerOfSixTeen--;
                    if(powerOfSixTeen == 0 && leftOver == 0){
                        hexaA += '0';
                    }
                }
            }
        } while (powerOfSixTeen != 0 || A != 0);
        cout << "0x" << hexaA << endl;
        // B
        double B;
        cin >> B;
        // C
        double C;
        cin >> C;
        
    }
    return 0;
    
}
