/*
Problem: Welcome to the  AI Tutor
Problem Code: DECINC
Platform: CodeChef
URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DECINC
*/

#include <iostream>
using namespace std;

int main() {
int N;
cin >> N;

if (N % 4 == 0)
cout << N + 1;
else
cout << N - 1;

return 0;
}
