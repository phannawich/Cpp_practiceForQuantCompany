#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    scanf("%d" , &q);
    map<string, int>m;
    int type;
    string name;
    int marks;
    for (int i = 0; i < q; i++) {
       cin >> type;
        if (type == 1){
            string line;
            getline(cin, line);
            stringstream ss(line);       
            ss >> name >> marks;
            m.insert(make_pair(name, marks));
        }else if(type == 3){
            //TODO
        }
    }
    return 0;
}
