#include <stdio.h>
// stack의 front
int k = 0;
// stack의 behind
int h = 0;

typedef struct
{
    char a[N][3];
    int *left_child;
    int *right_child;
};

int main()(
    int N = 0;
    int stack[25];

    scanf("%d", &N);

    char a[N][3];

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i][0]);
        for (int j = 1; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            // push
            stack[h] = a[i][j];
            if (a[i][j] == stack[k])
            {
                // pop
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = i; j < 3; j++)
        {
        }
    }

)
