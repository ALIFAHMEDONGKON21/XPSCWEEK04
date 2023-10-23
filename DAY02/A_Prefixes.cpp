#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a_count = 0;
    int b_count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            a_count++;
        } else {
            b_count++;
        }
    }

    if (a_count == b_count) {
        // If the counts of 'a' and 'b' are already equal, no operations are needed.
        cout << 0 << endl;
    } else {
        // Calculate the character to replace and the number of operations required
        char char_to_replace = (a_count > b_count) ? 'a' : 'b';
        int operations = abs(a_count - b_count);

        // Modify the string
        for (int i = 0; i < n && operations > 0; i++) {
            if (s[i] != char_to_replace) {
                s[i] = char_to_replace;
                operations--;
            }
        }

        cout << operations << endl;
    }

    cout << s << endl;

    return 0;
}
