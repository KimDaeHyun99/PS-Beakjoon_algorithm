#include <stdio.h>

int main()
{
    int N = 0;
    int j = 0;

    scanf("%d", &N);

    int H[N];
    int H_input = 0;
    int count = 0;
    int output[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &H_input);
        H[i] = H_input;
    }

    H[0] = 100000000;
    for (int i = 1; i < N; i++)
    {
        j = 0;
        do
        {
            j++;

        } while (H[i] > H[i - j]);

        output[i] = i - j + 1;
        if (i == j)
        {
            output[i] = 0;
        }
    }
    output[0] = 0;
    for (int i = 0; i < N; i++)
        printf("%d ", output[i]);
}
