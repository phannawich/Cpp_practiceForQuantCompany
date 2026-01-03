#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    string str;
    getline(cin, str);
    stringstream ss(str);
    char comma;
    int input;
    while (ss >> input){
            v.push_back(input);
            ss >> comma;
    }
    for (int i = 0; i < v.size(); i++) {
        printf("%d\n", v[i]);
    }
    return 0;
    
}
