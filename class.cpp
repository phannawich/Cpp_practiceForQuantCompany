#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int a){
            age = a;
        }
        void set_first_name(string fn){
            first_name = fn;
        }
        void set_last_name(string ln){
            last_name = ln;
        }
        void set_standard(int s){
            standard = s;
        }
        
        int get_age(){
            return age;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        int get_standard(){
            return standard;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Student s;
    int age;
    string first_name;
    string last_name;
    int standard;
    cin >> age >> first_name >> last_name >> standard;
    s.set_age(age);
    s.set_first_name(first_name);
    s.set_last_name(last_name);
    s.set_standard(standard);
    
    cout << s.get_age() << '\n' << s.get_last_name() << ", " << s.get_first_name() << '\n' << s.get_standard() << endl;
    
    cout << '\n';
    
    cout << s.get_age() << ',' << s.get_first_name() << "," << s.get_last_name() << ',' << s.get_standard() << endl;
    return 0;
}
