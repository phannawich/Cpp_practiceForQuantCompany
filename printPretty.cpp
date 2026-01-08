#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>
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

string twoDecimalString(double number){
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << number;  // rounds + forces 2 decimals
    return oss.str();
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        // A (heximal)
        double A;
        cin >> A;
        int a = (int)A;
        string hexaA = "";
        int powerOfSixTeen = 0;
        int coefficient = 0;
        int leftOver = 0;
        do {
            coefficient = (a / pow(16 ,powerOfSixTeen)); 
            if(coefficient >= 16){
                powerOfSixTeen++;
            }else {
                if (powerOfSixTeen == 0) {
                    hexaA += baseTenToSixTeen(coefficient);
                    // cout << A << endl;
                    a = a - coefficient;
                    // cout << A << endl;
                }else {
                    leftOver = a % int(pow(16, powerOfSixTeen));
                    hexaA += baseTenToSixTeen(coefficient);
                    a = leftOver;
                    powerOfSixTeen--;
                    if(powerOfSixTeen == 0 && leftOver == 0){
                        hexaA += '0';
                    }
                }
            }
        } while (powerOfSixTeen != 0 || a != 0);
        cout << "0x" << hexaA << endl;
        // B
        double B;
        cin >> B;
        int isPositive = 0;
        string output_B;
        if(B >= 0){
            isPositive = 1;
            output_B = twoDecimalString(B);
            output_B.insert(0, "+");
            while (output_B.size() < 15) {
                output_B.insert(0, "_");
            }
            cout << output_B << endl;
        }else{
            isPositive = 0;
            
        }
        // C
        double C;
        cin >> C;
        
    }
    return 0;
    
}
