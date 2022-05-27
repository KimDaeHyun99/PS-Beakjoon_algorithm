//문제당 풀이시간이 너무 오래걸림
// C언어 기초가 부족한 것 같아서 백준의 단계별로 풀어보기순서대로 풀어볼 계획

#include <stdio.h>

// stack의 front
int k = 0;
// stack의 behind
int h = 0;

int main()
{
    int N = 0;
    scanf("%d", &N);

    char a[25][3];
    int stack_number[25];
    char stack_char[25];

    for (int i = 0; i < N; i++)
    {
        scanf("%c", &a[i][0]);

        for (int j = 1; j < 3; j++)
        {
            scanf("%c", &a[i][j]);
            // push

            stack_char[k++] = a[i][j];
            if (a[i][j] == stack[k])
            {
                stack_number[k] = i;
                printf("%d", stack_number[k]);
                k++;
            }
        }
    }
}
