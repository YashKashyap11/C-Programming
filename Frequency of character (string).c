#include<stdio.h>
#include<string.h>
int main() {
    
    char str[50]="gullyboyinthehouseofmyfriend",d;
    int i,j,k,m=0;
    
    for(d='a';d<='z';d++)
    {
        m=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(d==str[j])
            {
                m++;
            }
        }
        if(m>0)
        printf("[%c] is %d times.\n",d,m);
    }
    return 0;
}