#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

char baseTenToSixTeen(int number){
    char result;
    if (number > 9) {
        //TODO
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
        do {
            coefficient = (A / pow(16 ,powerOfSixTeen)); 
            if(coefficient >= 16){
                powerOfSixTeen++;
            }else {
                if (powerOfSixTeen == 0) {
                    hexaA += to_string(coefficient);
                }else {
                    //TODO
                }
            }
        } while (powerOfSixTeen == 0);
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
