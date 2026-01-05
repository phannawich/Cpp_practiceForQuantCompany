#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <optional>
// intclude <
#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;

    cin >> n >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // eat the rest of the first line

    // scanf("%d %d\n", &n, &q);
    unordered_map<string, string> mp;
    vector<string> tagStack;
    
    for (int i = 0; i < n; i++) {
        string line;
       getline(cin, line);
       if (line.size() >= 2 && line[1] == '/'){
        if(!tagStack.empty()){
            tagStack.pop_back();
        }
            continue;
       }
       if (!line.empty() && line.front() == '<'){
        line.erase(line.begin());
       }
       if (!line.empty() && line.back() == '>'){
        line.pop_back();
       }
       
       string tag;
       stringstream ss(line);
       ss >> tag;
       
       tagStack.push_back(tag);
       
       string path = tagStack[0];
       for (int j = 1; j < (int)tagStack.size() ; j++) {
        path += '.' + tagStack[j];
       }
       
       string attr, eq, val;
       while(ss >> attr >> eq >> val){
        if(!val.empty() && val.front() == '"'){
            val.erase(val.begin());
        }
        if (!val.empty() && val.back() == '"') {
            val.pop_back();
        }
        mp[path + '~' + attr] = val;
       }
    }       
    
    for (int i = 0; i < q; i++) {
        string query;
        getline(cin, query);
        
        auto it = mp.find(query);
        if(it == mp.end()){
            cout << "Not Found!\n";
        }
        else{
            cout << it->second << '\n';
        }
    }
    return 0;
}