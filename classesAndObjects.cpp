#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    private:
       int scores[5]; 
        
    public:
        void input(){
            for (size_t i = 0; i < 5; i++) {
                cin >> scores[i];
            }
        }
        int calculateTotalScore(){
            int total_grade = 0;
            for (size_t i = 0; i < 5; i++) {
                total_grade += scores[i];
            }
            return total_grade;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    Student arr[n];
    int Kristine_score;
    int better_than_Kristine = 0;
    
    //Find Kristine score
    arr[0].input();
    Kristine_score = arr[0].calculateTotalScore();
    
    for (size_t i = 1; i < n; i++) {
        arr[i].input();
        if(arr[i].calculateTotalScore() > Kristine_score){
            better_than_Kristine++;
        }
    }
    cout << better_than_Kristine;
    return 0;
}
