//offlin3_P3
#include<stdio.h>
#include <string.h>
int main()
{
  char s[20];
  char p[20];
  scanf(" %[^\n]",s);
  scanf(" %[^\n]",p);
  printf("\n");
  //printf("%s",s);
  //printf("%s",p);
  int slen=strlen(s);
  int plen=strlen(p);
  int i,j,k,l,m,x=0,r=0,n,v=0,c=0,t=0,o,f1=0,fs=-1,f=-1,f2=-1;
  int pes=0;
  for (i=0;i<plen;i++)
  {
     if(p[i]=='*')
   {  f=0;
     m=i;
     break;
   }
  }
if(f==-1)
{   
    for(k=0;k<slen;k++)
     {
        for(l=0;l<plen;l++)
        {
            if(p[k]==s[l] || p[k]=='.')
            f1=-1;
            else {f1=0;}
        }
     }
     if(f1==-1)
     printf("true");
     else printf("false");
}

if(f==0)
{
  // m, index of star
   if(m>=2 && p[m-1]!='.')  //m and dot are not side by side
   {  
     for(int k=0;k<m;k++)// first character
    {
    if(p[k]==s[k] ||p[k]=='.')
     { 
            f2=0;
     }
        else {f2=-1;
                printf("false");}
    }
    if(f2==0)
    {   
        if(p[plen-1]=='*')   // last characters compare
        {
            for(int k=0;k<m;k++)// first character
            {
              if(p[k]==s[k] ||p[k]=='.' || (p[m]=='*' && s[m-1]=='\0'))
             { 
                  v=-1;
              }
            }
            if(v==-1) {printf("true");}
            else {printf("false");}
        }   
        while(p[plen-1-pes]==s[slen-1-pes] && p[plen-1-pes]!='*')
        {
            pes++;
        }
        if(pes!=(plen-m-1))
        {
            printf("false");
        }
    }
     if(pes==(plen-m-1) || v==-1)
     {   
        while(p[m-1]==s[m-1+t] || s[m-1]=='\0' )//*star character comapare
        {
            t++;
        }
       if(t!=0)
       {
        printf("true");
       }
       else {printf("false");}
     }   
   }
  if(m==1 && p[0]=='.')
  {
    if(p[plen-1]!='*')
    {
         r=plen-m-1;
         for(int q=0;q<r;q++)
         {
            if(p[plen-1-q]==s[slen-1-q] || p[plen-1-q]=='.')
            {
                c=0;
            }
            else {c=-1;}
         }
         if (c==0)
         {
            printf("true");
         }
         if(c==-1) printf("false");

    }
     else {printf("true");}
     
  }
  if(m==1 && p[0]!='.' && p[m-1]!='.') //m and dot are not side by side and first ch is no dot
  {
        r=plen-m-1;
         for(int q=0;q<r;q++)
         {
            if(p[plen-1-q]==s[slen-1-q] || p[plen-1-q]=='.' )
            {
                c=0;
            }
            else {c=-1;}
         }
         if(c==-1) printf("false");
    if(c==0)
    {
        for(int q=0;q<(slen-r);q++)
        {
            if(p[0]==s[q] ||p[0]=='.' )
            {
               x=0;
            }
            else {x=-1;
                  printf("false");     }
        }
        if(x==0)
        {
            printf("true");
        }
    }

  }
  if(p[m-1]=='.'&& m>=2) // m and dot side by side
  {
        r=plen-m-1;
         for(int q=0;q<r;q++)
         {
            if(p[plen-1-q]==s[slen-1-q] )
            {
                c=0;
            }
            else {c=-1;}
         }
         if(c==-1) printf("false");
    if(c==0)
    {
        for(int q=0;q<(plen=m-1);q++)
        {
            if(p[q]==s[q] )
            {
               x=0;
            }
            else {x=-1;
                  printf("false");     }
        }
        if(x==0)
        {
            printf("true");
        }
    }
  }

}
return 0;
}




