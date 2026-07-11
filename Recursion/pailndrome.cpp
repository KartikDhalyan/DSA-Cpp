#include <iostream>
#include <string>
#include <cctype>   // isalnum() and tolower()
using namespace std;

int main() {

    string s = "A man, a plan, a canal: Panama";
    string ans = "";

    // Traverse the original string
    for (char c : s) {

        // Keep only letters (A-Z, a-z) and digits (0-9)
        if (isalnum(c)) {

            // Convert uppercase to lowercase and add to new string
            ans += tolower(c);
        }
    }

    cout << "Clean String : " << ans << endl;

    int n = ans.length();

    // Check palindrome
    for (int i = 0; i < n / 2; i++) {

        // Compare first and last characters
        if (ans[i] != ans[n - i - 1]) {
            cout << "Not Palindrome";
            return 0;
        }
    }

    cout << "Palindrome";

    return 0;
}