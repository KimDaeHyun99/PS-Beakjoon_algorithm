#include <stdio.h>

int main()
{
    int point = 0;
    int time = 0;

    //보내야하는 값의 수
    int n = 4;
    // buffer의 크기
    int w = 2;
    // buffer의 저장소 크기
    int L = 10;

    // buffer에 있는 값의 합
    int buffer_sum = 0;

    scanf("%d %d %d", &n, &w, &L);

    // input 값
    int input[4];
    //원형 큐
    int buffer[2];
    int timer[2];

    for (int i = 0; i < w; i++)
    {
        buffer[i] = 0;
        timer[i] = 0;
    }
    for (int i = 0; i < n; i++)
        scanf("%d", &input[i]);

    for (int i = 0; i < n; i++)
    {
        if (point > w)
            point = 0;

        for (int j = 0; j < w; j++)
        {
            if (timer[j] < 0)
                timer[j] = 0;
            if (timer[j] == 0)
            {
                buffer_sum -= buffer[j];
                buffer[j] = 0;
            }
        }
        if (buffer_sum + input[i] <= L)
        {
            buffer[point] = input[i];
            point++;
            time++;
            buffer_sum += input[i];
            for (int j = 0; j < w; j++)
                timer[j]--;
        }
        else if (buffer_sum + input[i] > L)
        {

            time++;
            for (int j = 0; j < w; j++)
                timer[j]--;
        }
    }

    printf("%d ", time);
}
