#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a;
    string b;
    
    getline(cin, a);
    getline(cin, b);
    
    printf("%d %d\n", a.size(), b.size());
    string a_prime = a + b;
    char firstCharA = a[0];
    char firstCharB = b[0];
    a[0] = firstCharB;
    b[0] = firstCharA;
    string b_prime = a + ' ' + b;
    cout << a_prime << endl << b_prime;
    return 0;
    
}
