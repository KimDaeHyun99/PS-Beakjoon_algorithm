#include <stdio.h>
int K = 0;
int count = -1;
int input[100000];
int stack[100000];
int sum = 0;

int main()
{
    scanf_s("%d", &K);

    for (int i = 0; i < K; i++)
    {
        scanf_s("%d", &input[i]);
        if (input[i])
        {
            count++;
            stack[count] = input[i];
        }
        else
        {
            stack[count--] = 0;
        }
    }
    for (int i = 0; i < K; i++)
        sum += stack[i];
    printf("%d", sum);
}