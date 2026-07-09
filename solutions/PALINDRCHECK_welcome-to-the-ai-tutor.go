/*
Problem: Welcome to the  AI Tutor
Problem Code: PALINDRCHECK
Platform: CodeChef
URL: https://www.codechef.com/practice/course/strings/STRINGS/problems/PALINDRCHECK
*/

string reverseWords(string s) {
stringstream ss(s);
string word;
string ans = "";

while (ss >> word) {
if (ans == "") {
ans = word;
} else {
ans = word + " " + ans;
}
}

return ans;
}
