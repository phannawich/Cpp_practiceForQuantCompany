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
    map<string, int>::iterator it;
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
            it = m.find(name);
            if(it != m.end()){
                m.find(name)->second += marks;
            }
            else {
                m.insert(make_pair(name, marks));
            }
        }else if(type == 2){
            string key;
            cin >> key;
            m.erase((key));
        }
        else if(type == 3){
            string key;
            cin >> key;
            it = m.find(key);
            if(it != m.end()){
                cout << m.find(key)->second << endl;
            }else{
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
