#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s); // Read the full line including spaces

    string result = "";
    bool inWord = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            // It's a letter, add to result
            result += s[i];
            inWord = true;
        } else {
            // It's a space
            if (inWord) {
                // Add a single space only if it's between words
                result += ' ';
                inWord = false;
            }
        }
    }

    // Remove trailing space if it exists
    if (!result.empty() && result[result.length() - 1] == ' ') {
        result.pop_back();
    }

    cout << result << endl;
    return 0;
}
