#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str, size_t s, size_t e) {
  if (s >= e)
    return true;

  // If first and last
  // characters do not match
  if (str.at(s) != str.at(e))
    return false;

  // If there are more than
  // two characters, check if
  // middle substring is also
  // palindrome or not.
  if (s < e + 1)
    return isPalindrome(str, ++s , --e);

  return true;
}

int main() {
  string str = "racecar";
  //string str = "hello";
  bool res = isPalindrome(str, 0, str.size() - 1);
  cout << res << "\n";
  return 0;
}
