#include <stdio.h>

int main()
{
    int N = 0;
    int count = 1;
    int sum = 0;

    scanf("%d", &N);
    int que[N];

    for (int i = 0; i < N; i++)
    {
        sum += i + 1;
        que[i] = i + 1;
    }

    for (int i = 0; sum != que[i];)
    {

        if (i >= N)
            i = 0;
        if (count % 2 == 1 && que[i])
        {
            sum -= que[i];
            que[i] = 0;
            count++;
        }
        else if (count % 2 == 0 && que[i])
        {
            count++;
        }
        i++;
    }
    printf("%d", sum);
}
