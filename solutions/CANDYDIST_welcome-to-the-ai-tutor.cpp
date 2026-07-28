/*
Problem: Welcome to the  AI Tutor
Problem Code: CANDYDIST
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CANDYDIST
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, M;
cin >> N >> M;

if (N % M == 0 && (N / M) % 2 == 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
}

return 0;
}
