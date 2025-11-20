// offline_p2_2
// offline_3_p2
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    char c[1000];
    scanf("%[^\n]", &a);
    int stl = strlen(a);
    int i, j, k, f, len, max = 0;
    for (i = 0; i < stl; i++)
    {
        len = 1;
        j = 0;
        c[j] = a[i];
        //took i^th pos ch in c's 0 position
        for (k = i + 1; k < stl; k++)
        {
            int f = 0; //took f variable for checking conditon
            for (int p = 0; p <= j; p++)
            {
                if (c[p] == a[k]) //checking all the previous positon ch's in c string with current ch
                   { f = 1;
                     break;       //if it matched, exit the loop
                   }
            }
            if (!f)
            {
                c[j + 1] = a[k];
                len++;
                j++;
            }
            else
            {
                break;
            }
        }
        if (len > max || max == 0)
        {
            max = len;
        }
    }

    printf("%d", max);
    return 0;
}