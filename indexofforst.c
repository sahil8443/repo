/*Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 */
#include <string.h>

int strStr(char* haystack, char* needle) {
    char* pos = strstr(haystack, needle);
    return pos ? pos - haystack : -1;
}
