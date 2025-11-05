#include<stdio.h>
#include<string.h>
int main() {
    
    char str[50]="GullyBoy",dup[26];
    int i,j,k,m=0;
    
    for(i=0;str[i]!=NULL;i++)
    {
        for(j=i+1;str[j]!=NULL;j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;str[k]!=NULL;k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    for(int t=0;t<strlen(str);t++)
    {
        printf("%c",str[t]);
        if(t==(strlen(str)-1))
        break;
        printf(",");
    }
    return 0;
}