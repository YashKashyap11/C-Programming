/*Example 1:

Input: s = "anagram", t = "nagaram"
Output: true

Example 2:

Input: s = "rat", t = "car"
Output: fals
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[50] = "listen";
    char t[50] = "silent";
    int cs[26] = {0}, ct[26] = {0};
    int flag = 1; // assume they are anagrams initially

    // If lengths differ, they can't be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of each character
    for (int i = 0; s[i] != '\0'; i++) {
        cs[s[i] - 'a']++;
        ct[t[i] - 'a']++;
    }

    // Compare frequencies
    for (int i = 0; i < 26; i++) {
        if (cs[i] != ct[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
