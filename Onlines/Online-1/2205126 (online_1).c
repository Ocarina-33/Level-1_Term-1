#include <stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
     while(N<0)
     {
        scanf("%d",&N);
     }
    int n1=0,n2=1,n3=1,sum=0;
    if(N==1) printf("%d",n1);
    if(N==2) printf("%d %d",n1,n2);
    if(N==3) printf("%d %d %d",n1,n2,n3);
    if(N>=4){
    printf("%d %d %d",n1,n2,n3);
    for(int i=4;i<=N;i++)
    {
        sum=n1+n2+n3;
        printf("%d ",sum);
        n1=n2;
        n2=n3;
        n3=sum;
    }
    }
    return 0;
}
