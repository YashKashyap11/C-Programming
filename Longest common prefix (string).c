/*
Find minlen(string)!!!

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/
#include<stdio.h>
#include<string.h>

int main(){
    char* strs[3] = {"flower","flow","flight"};
    //char out[];
    int flag = 0,m=0;
    
    for (int i=0;i<4;i++){
        for(int j=0;j<2;j++){
        if(strs[j][i]!=strs[j+1][i]){
        flag =1;
        break;}
        
        }
        if(flag ==  1)
        break;
        m++;
    }
    x:
    printf("%d\n",m);
    if(m!=0)
    {for(int k=0;k<m;k++)
    printf("%c",strs[0][k]);}
    else
    printf("No common prefix.");
}