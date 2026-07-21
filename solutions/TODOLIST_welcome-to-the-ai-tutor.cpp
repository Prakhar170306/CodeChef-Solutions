/*
Problem: Welcome to the  AI Tutor
Problem Code: TODOLIST
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TODOLIST
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N;
cin >> N;

int removeCount = 0;

for (int i = 0; i < N; i++) {
int d;
cin >> d;

if (d >= 1000)
removeCount++;
}

cout << removeCount << endl;
}

return 0;
}
