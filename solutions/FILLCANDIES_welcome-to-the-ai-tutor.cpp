/*
Problem: Welcome to the  AI Tutor
Problem Code: FILLCANDIES
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FILLCANDIES
*/

#include <iostream>
using namespace std;

int main() {
int T;
cin >> T;

while (T--) {
int N, K, M;
cin >> N >> K >> M;

int capacity = K * M;

cout << (N + capacity - 1) / capacity << endl;
}

return 0;
}
