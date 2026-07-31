/*
Problem: Welcome to the  AI Tutor
Problem Code: SELFDEF
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SELFDEF
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N;
cin >> N;

int count = 0;

for (int i = 0; i < N; i++) {
int age;
cin >> age;

if (age >= 10 && age <= 60) {
count++;
}
}

cout << count << endl;
}

return 0;
}
