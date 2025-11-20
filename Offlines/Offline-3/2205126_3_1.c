#include<stdio.h>
int main()
{
    int m1,m2,m,n,tl;
    double median;
    scanf("%d %d",&m,&n);
    tl=m+n;
    int odd=tl/2; int ev1=(tl/2),ev2=(tl/2)-1;
    int nums1[m];
    int nums2[n];
    int mer[tl];
    m1=0;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&nums1[i]);
        mer[m1]=nums1[i];
        m1++;
    }
    m2=m;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums2[i]);
        mer[m2]=nums2[i];
        m2++;
    }
    // sorting merged array
    int i,j,min,idx,tmp;
     for(i=0;i<tl-1;i++)
     {
        min=mer[i];
        idx=i;
        for(j=i+1;j<tl;j++)
        {
            if(mer[j]<min)
            {
                
             idx=j;
             min=mer[j];
        }
     }
        tmp=mer[i];
        mer[i]=min;
        mer[idx]=tmp;
     }
for(int k=0;k<tl;k++)
{
    printf ("%d ",mer[k]);
}
    if(tl%2!=0)
    {
        median=mer[odd];
    }
    if(tl%2==0) 
    {
        median=(float)(mer[ev1]+mer[ev2])/2;
    }
    printf("\n");
    printf("%.1lf",median);
    return 0;
}