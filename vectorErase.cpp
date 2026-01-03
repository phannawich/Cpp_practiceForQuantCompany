#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    std::vector<int> v;
    int input;
    for (int i = 0; i < n; i++) {
        cin >> input;
        v.push_back(input);
    }
    int x;
    scanf("%d", &x);
    v.erase(v.begin() + (x - 1));
    int a, b;
    scanf("%d %d", &a, &b);
    v.erase(v.begin() + (a - 1), v.begin() + (b -1));
    printf("%d\n", v.size());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
