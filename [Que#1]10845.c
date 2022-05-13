#include <stdio.h>

int main()
{
    int N = 0;
    int input_number = 0;
    int size = 0;
    int back = -1;
    int front = 0;
    char input[10];

    scanf("%d", &N);
    int que[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", &input);

        if (input[0] == 'p' && input[1] == 'u')
        {
            back++;
            scanf("%d", &input_number);
            que[back] = input_number;
            size++;
        }
        else if (input[0] == 'p' && input[1] == 'o')
        {
            if (!size)
                printf("-1\n");
            else
            {

                printf("%d\n", que[front]);
                front++;
                size--;
            }
        }
        else if (input[0] == 's')
            printf("%d\n", size);
        else if (input[0] == 'e')
        {
            if (size == 0)
                printf("1\n");
            else
                printf("0\n");
        }
        else if (input[0] == 'f')
            if (!size)
                printf("-1\n");
            else
                printf("%d\n", que[front]);
        else if (!size)
            printf("-1\n");
        else
            printf("%d\n", que[back]);
    }
}
