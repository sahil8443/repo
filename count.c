/*Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).

The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.*/
int maxScore(char *s) {
    int ans = 0, zeros = 0, ones = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') ones++;
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '0') zeros++;
        if (s[i] == '1') ones--;
        if (zeros + ones > ans) ans = zeros + ones;
    }

    return ans;
}