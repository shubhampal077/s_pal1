#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    int dp0[100005];
    int dp1[100005];

    while (tc--)
    {
        char s[100005];
        scanf("%s",s);
        //printf("%s",s);
        int n = strlen(s);
        for (int i = 0;i <= n;i++)
        {
            dp0[i] = 0;
            dp1[i] = 0;
        }

        for (int i = 0;i < n;i++)
        {
            if (s[i] == '0')
            {
                dp0[i+1] = 1 + dp0[i];
                dp1[i+1] = dp1[i];
            } else {
                dp0[i+1] = dp0[i];
                dp1[i+1] = 1 + dp1[i];
            }
        }

        long long int count = 0;
        //int times = ceil(log2(n));
        int times=ceil((sqrt(1+4*n)-1)/2);
        int i = 1;

        while (i <= times)
        {
            int index_x = 1;
            int index_y = index_x + (i * i) + i - 1;
            while (index_y <= n)
            {
                int count_0 = dp0[index_y] - dp0[index_x-1];
                int count_1 = dp1[index_y] - dp1[index_x-1];
                if (count_0 == count_1 * count_1)
                    count++;
                index_x++;
                index_y++;
            }
            i++;
        }

        printf("%lld\n",count);
    }

    return 0;
}
