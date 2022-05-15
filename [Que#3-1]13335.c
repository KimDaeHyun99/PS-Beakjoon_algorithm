#include <stdio.h>

int main()
{
    //다리 위에 있는 트럭의 무게합
    int weight_sum = 0;

    //다리 위에 있는 트럭의 개수
    int truck_count = 0;
    int n = 0;
    int w = 0;
    int L = 0;

    int truck_weight[n];
    int time[n];
    int time_t = 0;

    scanf("%d %d %d", &n, &w, &L);
    for (int i = 0; i < n; i++)
        scanf("%d", &truck_weight[n]);

    for (int i = 0; truck_weight[n] != 0; i++)
    {
        if (i > w)
        {
            weight_sum = weight_sum - truck_weight
        }
        if (L >= weight_sum + truck_weight[i])
        {
            if (w < truck_count + 1)
                time_t++;
            else
            {
                time_t++;
                weight_sum = weight_sum + truck_weight[i];
                truck_count++;
            }
        }
        else
            time_t++;
    }

    printf("%d ", time_t);
}
