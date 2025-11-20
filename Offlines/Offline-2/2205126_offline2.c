#include <stdio.h>
int main()
{
    unsigned int ca, n;
    scanf("%u", &ca);
    // took ca variable for case number
    for (n = 1; n <= ca; n++)
    {

        // counting query numbers 1
        unsigned int maxca, minca,concase=n;
        unsigned int qu, can, query1, i, j, k, l;
        scanf("%u", &k);
        qu = k;
        // assigned k in qu to print query number later
        l = 1;
        for (i = 0; i < 31; i++)
        {
            l = l * 2;
        }
        j = l;
        int coq1 = 0;
        for (i = 0; i < 32; i++)
        {
            if ((k / j) >= 1)
            {
                coq1++;
                k = k % j;
            }
            j = j / 2;
        }
        query1 = coq1;
        // assigned coq1 in query1

        // done with query numbers 1s count

        // starting candidate numbers loop
        // took variable m for candidate numbers set number, flag for printing the case no accurately
        unsigned int m, t, diff;
        unsigned int flag = 0, max_diff = 0, min_diff = 32;
        scanf("%u", &m);
        for (t = 0; t < m; t++)
        {
            unsigned int max_can, min_can, diff;
            unsigned int cannew, can, i, j, l;
            scanf("%u", &can);
            flag++;
            if (flag == 1)
            {
                printf("Case: %u\n", concase);
            }
            cannew = can;
            // assigned can into cannew for future use, as can will become zero by being divided constantly
            l = 1;
            for (i = 0; i < 31; i++)
            {
                l = l * 2;
            }
            j = l;
            unsigned int can1 = 0;
            for (i = 0; i < 32; i++)
            {
                if ((can / j) >= 1)
                {
                    printf("1");
                    can1++;
                    can = can % j;
                }
                else
                {
                    printf("0");
                }
                j = j / 2;
            }
            printf("\n");
            // calculating diffrenece and assigning the absolute value in diff
            diff = (query1 > can1) ? (query1 - can1) : (can1 - query1);
            
            if (diff > max_diff || (diff == max_diff && cannew > max_can))
            {
                max_diff = diff;
                max_can = cannew;
            }
            if (diff < min_diff || (diff == min_diff && cannew < min_can))
            {
                min_diff = diff;
                min_can = cannew;
            }
            maxca = max_can;
            minca = min_can;
        }
        // for printing query number
        unsigned int ii, pow2, pow;

        pow = 1;
        for (ii = 0; ii < 31; ii++)
        {
            pow = pow * 2;
        }
        pow2 = pow;
        for (ii = 0; ii < 32; ii++)
        {
            if ((qu / pow2) >= 1)
            {
                printf("1");
                qu = qu % pow2;
            }
            else
            {
                printf("0");
            }
            pow2 = pow2 / 2;
        }
        printf("\n");
        printf("Number with Minimum Difference: %u \nNumber with Maximum Difference: %u", minca, maxca);
    }
    return 0;
}