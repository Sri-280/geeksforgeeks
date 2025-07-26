class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        string a=s;
        reverse(s.begin(),s.end());
        return a==s;
        
    }
};