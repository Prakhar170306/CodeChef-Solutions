/*
Problem: Welcome to the  AI Tutor
Problem Code: FLOW017
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW017
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int A, B, C;
cin >> A >> B >> C;

int largest = max(A, max(B, C));
int second;

if (largest == A)
second = max(B, C);
else if (largest == B)
second = max(A, C);
else
second = max(A, B);

cout << second << endl;
}

return 0;
}
