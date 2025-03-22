/*Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

 */
int lengthOfLastWord(char* s) {
    int len = 0, i = strlen(s) - 1;
    while (i >= 0 && s[i] == ' ') i--;  
    while (i >= 0 && s[i] != ' ') { len++; i--; }
    return len;
}
