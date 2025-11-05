/*Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
*/
#include<stdio.h>
#include<string.h>

int main(){
    char haystack[] = "sdbutsad", needle[] = "sad";
    int found=-1;
    for(int i=0;i<=strlen(haystack)-strlen(needle);i++){
        int m=0;
        for(int j=0;j<strlen(needle);j++){
            if(haystack[i+j]==needle[j])
            m++;
        }
        if(m==3){
            found = i;
            break;
        }
    }
    if(found!=-1)
    printf("Found at index %d.",found);
    else
    printf("Not found.");
}