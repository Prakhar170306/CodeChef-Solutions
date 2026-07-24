/*
Problem: Welcome to the  AI Tutor
Problem Code: FLIPCARDS
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, X;
cin >> N >> X;

cout << min(X, N - X) << endl;
}

return 0;
}
