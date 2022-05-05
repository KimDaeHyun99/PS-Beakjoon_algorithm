// beakjoon_2493
// 알고리즘은 맞은 것 같은데, 시간복잡도를 해결하지못함.
// 채점 중(61%이상을 넘기지 못함.)

#include <stdio.h>

int main()
{
    int N = 0;
    int j = 0;
    int max = 0;
    scanf("%d", &N);
    N++;
    int H[N];
    int output[N];
    H[0] = 100000000;

    scanf("%d", &H[1]);
    H[1];
    max = H[1];
    output[1] = 0;
    for (int i = 2; i < N; i++)
    {
        scanf("%d", &H[i]);
        H[i];
        if (H[i] >= max)
        {
            max = H[i];
            output[i] = 0;
        }
        else
        {
            j = 0;
            do
            {
                j++;
            } while (H[i] > H[i - j]);
            output[i] = i - j;
        }
    }
    for (int i = 1; i < N; i++)
        printf("%d ", output[i]);
}
