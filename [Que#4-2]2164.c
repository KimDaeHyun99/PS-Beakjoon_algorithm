#include <stdio.h>

int main()
{
    int N = 0;
    int count = 1;
    int i = 0;
    int last_number = 0;

    scanf("%d", &N);
    int que[N];
    int N_count = N;
    for (int i = 0; i < N; i++)
        que[i] = i + 1;

    for (; N_count != 1; i++)
    {

        if (i >= N)
            i = 0;
        if (count % 2 == 1 && que[i])
        {
            que[i] = 0;
            count++;
            N_count--;
        }
        else if (count % 2 == 0 && que[i])
        {
            count++;
        }
    }
    for (int i = 0; i < N; i++)
        if (last_number <= que[i])
            last_number = que[i];
    printf("%d", last_number);
}
