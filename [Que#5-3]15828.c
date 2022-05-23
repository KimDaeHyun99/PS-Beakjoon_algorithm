#include <stdio.h>

int main()
{
    int N = 0;
    int N_count = 0;
    int j = -1;
    int k = 0;
    int o = 0;
    int que_sum = 0;
    scanf("%d", &N);

    int input[100000];
    int q[100000];

    for (int i = 0; input[i - 1] != -1; i++)
    {
        scanf("%d", &input[i]);
    }
    for (int i = 0; input[i] != -1; i++)
    {
        if (input[i] == 0 && N_count)
        {

            if (j >= k)
            {
            }
            else
            {
                que_sum--;
                j++;
                q[j] = 0;
                N_count--;
                if (que_sum < 0)
                {
                    N_count = 0;
                    que_sum = 0;
                }
            }
        }
        else if (input[i] == -1)
            break;
        else if ((input[i] > 0) && (N > N_count) && (N_count >= 0))
        {
            q[k] = input[i];
            k++;
            que_sum++;
            N_count++;
        }
    }

    if (que_sum <= 0)
        printf("empty");

    else
    {
        for (int i = 0; i < N + 1; i++)
            if (q[i])
                printf("%d\n", q[i]);
    }

    return 0;
}
