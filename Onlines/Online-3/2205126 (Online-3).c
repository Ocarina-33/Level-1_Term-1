#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,j,n,nr,check,r,c;
  int sum,k;
  scanf("%d %d",&r,&c);
  int **arr=(int**)malloc(r * sizeof(int));
  for(i=0;i<r;i++)
  {
    *(arr+i)=(int*)malloc(c * sizeof(int));
  }
  int **res=(int**)malloc(r * sizeof(int));
  for(i=0;i<r;i++)
  {
    *(res+i)=(int*)malloc(c * sizeof(int));
  }

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",(*(arr+i)+j));
    }
}
printf("Enter check: ");
scanf("%d",&check);
int d=0,l=0;
for(i=0;i<r;i++)
{
    sum=0;
    for(j=0;j<c;j++)
    {
       printf("%d   ",*(*(arr+i)+j));
       sum=sum+ *(*(arr+i)+j);
    }
       printf("THE SUM IS %d\n",sum);
    if(sum==check)
    {
        nr++;
        continue;
    }
    else 
    {
        

          *(*(res+d)+l)=*(*(arr+i)+j);
          
        printf("%d   ",*(*(res+d)+n));
        
        d++;
        l++;
    }
    sum=0;
}

printf("\n");
for(i=0;i<(r-nr);i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d ",*(*(res+i)+j));
    }
    printf("\n");
}



  for(i=0;i<c;i++)
  {
    free(arr[i]);
    free(res[i]);
  }
  free(arr);
  free(res);
  return 0;
}