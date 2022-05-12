#include <stdio.h>

int main()
{

    int N = 0;
    char getstrlen[10];
    int getnumber = 0;
    int size = 0;
    int top = -1;

    scanf("%d", &N);

    int stack[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", &getstrlen);
        if (getstrlen[0] == 'p' && getstrlen[1] == 'u')
        {
            scanf("%d", &getnumber);
            stack[++top] = getnumber;
            size++;
        }
        else if (getstrlen[0] == 'p' && getstrlen[1] == 'o')
        {
            if (top == -1)
                printf("-1\n");
            else
            {
                printf("%d\n", stack[top]);
                stack[top--] = 0;
                size--;
                if (size < 1)
                    size = 0;
            }
        }
        else if (getstrlen[0] == 't')
        {
            if (top == -1)
                printf("-1\n");
            else
                printf("%d\n", stack[top]);
        }
        else if (getstrlen[0] == 's')
        {
            printf("%d\n", size);
        }
        else if (getstrlen[0] == 'e')
        {
            if (top == -1)
                printf("1\n");
            else
                printf("0\n");
        }
    }
}
