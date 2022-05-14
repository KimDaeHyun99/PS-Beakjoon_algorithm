#include <stdio.h>

int main()
{
    int N = 0;
    int K = 0;

    int *p;
    int count = 1;
    int p_number = 1;
    scanf("%d %d", &N, &K);

    int a[N];
    N++;
    p = &a[1];
    for (int i = 1; i < N; i++)
        a[i] = i;
    printf("<");
    for (; count < N - 1;)
    {
        if (p == &a[N])
            p = &a[1];

        if (*p && p_number == K)
        {
            printf("%d, ", *p);
            *p = 0;
            p_number = 1;
            count++;
        }
        else if (!(*p))
            *p++;
        else if (*p && p_number != K)
        {
            p_number++;
            *p++;
        }
    }

    for (int i = 1; i < N; i++)
        if (a[i])
            printf("%d", a[i]);
    printf(">");
}
