#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int len,c;
    char wor;
    scanf("%[^\n]",&str);
    len=strlen(str);
    int i,j,count;
    for(i=0;i<len-1;i++)
    {    
        count=1;
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;
             }
        }
        printf(" '%c':%d\n",str[i],count);
    }
    return 0;
}






