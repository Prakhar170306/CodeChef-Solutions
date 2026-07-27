/*
Problem: Welcome to the  AI Tutor
Problem Code: DNASTRAND
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DNASTRAND
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N;
cin >> N;

string S;
cin >> S;

for (int i = 0; i < N; i++) {
if (S[i] == 'A')
cout << 'T';
else if (S[i] == 'T')
cout << 'A';
else if (S[i] == 'C')
cout << 'G';
else
cout << 'C';   // S[i] == 'G'
}

cout << endl;
}

return 0;
}
