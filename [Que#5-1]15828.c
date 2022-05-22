#include <stdio.h>

int main()
{
    int N = 0;
    int N_count = 0;
    int j = 0;
    int k = 0;
    int que_sum = 0;
    scanf("%d", &N);

    int input[100000];
    int q[N];

    for (int i = 0; i < 100000; i++)
        scanf("%d", &input[i]);

    for (int i = 0; i < 100000; i++)
    {
        if (input[i] == 0 && N_count)
        {
            que_sum -= q[j];
            q[j] = 0;
            j++;
            N_count--;
        }
        else if (input[i] == -1)
            i = 100000;
        else if (input[i] && N > N_count >= 0)
        {
            q[k] = input[i];
            k++;
            que_sum += input[i];
            N_count++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (que_sum == 0)
        {
            printf("empty");
            i = N;
        }
        else
        {
            if (q[1])
                printf("%d", q[1]);
            for (int i = 1; i < N; i++)
                if (q[i])
                    printf(" %d", q[i]);
        }
    }
    return 0;
}
