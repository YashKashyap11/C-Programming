#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    char str[50]="gu2ll%y bo*yinth.eh$ou2seo358f#myfri2end",d;
    
    int flag[strlen(str)];
    for(int i=0;i<strlen(str);i++)
    flag[i]=0;
    
    int i,j,k,m=0;
    
    for(j=0;j<strlen(str);j++)
    {
       if(isalpha(str[j]))
           str[m++]=str[j];
    }
    str[m]='\0';
    
    printf("\n%s",str);
    return 0;
}