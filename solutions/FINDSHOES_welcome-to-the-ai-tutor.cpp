/*
Problem: Welcome to the  AI Tutor
Problem Code: FINDSHOES
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, M;
cin >> N >> M;

if (M >= N)
cout << N << endl;
else
cout << N + (N - M) << endl;
}

return 0;
}
