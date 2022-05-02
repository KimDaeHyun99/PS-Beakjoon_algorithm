#include <stdio.h>
#include <string.h>

int main()
{
    char input[50];
    int count = 0;
    int sum = 0;
    scanf("%s", &input);

    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == '(')
            count++;
        else
        {
            if (count > 0)
                count--;
            else
            {
                sum++;
            }
        }
    }
    sum += count;
    printf("%d", sum);
}
