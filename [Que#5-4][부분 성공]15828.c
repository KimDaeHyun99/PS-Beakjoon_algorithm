//채점 34%에서 계속 멈추는데, 어디가 틀렸는지 3일동안 찾아보았는데 실패했다.
//다음부터는 풀 문제를 선택할 때, 다른 사람들이 많이 풀어봐서 질문이 많은 문제를 선택해야겠다.

#include <stdio.h>

int main()
{
    int N = 0;
    int N_count = 0;
    int j = -1;
    int k = 0;

    scanf("%d", &N);

    int input[100000];
    int q[100000];

    for (int i = 0; i < 100000; i++)
        q[i] = 0;
    for (int i = 0; input[i - 1] != -1; i++)
    {

        scanf("%d", &input[i]);
    }
    for (int i = 0; input[i - 1] != -1; i++)
    {
        if (!N_count)
        {
            j = -1;
            k = 0;
        }
        if ((k >= N) && (N - 1 > N_count))
            k = 0;
        if ((j >= N) && (N - 1 > N_count))
            j = -1;

        if (input[i] == 0 && N_count)
        {
            j++;
            q[j] = 0;
            N_count--;
            if (N_count < 0)
                N_count = 0;
        }
        else if (input[i] == -1)
            break;
        else if ((input[i] > 0) && (N > N_count) && (N_count >= 0))
        {
            if (!q[k])
            {
                q[k] = input[i];
                k++;
                N_count++;
            }
        }
    }

    if (N_count <= 0)
        printf("empty\n");

    else
    {
        for (int i = 0; i < N; i++)
        {

            // if (j>=N)
            //   j=0;
            // if (q[j])
            //{
            if (j + 1 == N)
                j = -1;
            if (q[j + 1])
                printf("%d\n", q[++j]);
            else
                j++;
            // j++;
            //}
        }
    }
}
