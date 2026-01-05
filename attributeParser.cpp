#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <optional>
using namespace std;

struct AttrVal {
    string attr;
    string val;
};

struct Record {
    int tag;
    vector<AttrVal> item;
};

optional<string> getValue(const vector<Record>& records, int num, const string& attr) {
    for (const auto& r : records) {
        if (r.tag == num) {
            for (const auto& it : r.item) {
                if (it.attr == attr) return it.val;
            }
            return nullopt; // num found, attr not found
        }
    }
    return nullopt; // num not found
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    scanf("%d %d\n", &n, &q);
    vector<Record> records (n);
    stringstream ss;
    string tagString;
    string tag;
    int tagNumber;
    string attribute;
    string equalSign;
    string value;
    for (int i = 0; i < n; i++) {
       getline(cin, tagString);
       if (tagString[1] == '/') {
        continue;
       }
       tagString.erase(tagString.begin());
       tagString.pop_back();
    //    cout << tagString << endl;
        ss.str(tagString);
        ss >> tag >> attribute >> equalSign >> value;
    //    cout << tag << endl;
    //    cout << tag << ' '<< attribute << ' ' << equalSign << ' ' << value << endl;
        tagNumber = int((tag[3]) - '0'); // Hold number 1 -> n
        value.erase(value.begin());
        value.pop_back();
        records[tagNumber - 1].item.push_back({attribute, value});
       ss.clear();
    }
    
    
    
    string queryString;
    char c;
    // print out
    for (int i = 0; i < q; i++) {
        getline(cin, queryString);
        for (int j = 0; j < queryString.size(); j++) {
            if (queryString[j] == '~') {
                tagNumber = queryString[j - 1] - '0';
                queryString.erase(0, j + 1);
                // cout << tagNumber << queryString;
                if (auto v = getValue(records, tagNumber, queryString)) {
                    cout << *v << "\n";  // M
                } else {
                    cout << "Not Found!\n";
                }
            }
        }
    }
    return 0;
}