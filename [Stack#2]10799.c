#include <stdio.h>
#include <string.h>

int main()
{
    char input[100000];
    int sum = 0;
    int count = 0;

    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == '(')
        {
            count++;
        }
        else if ((input[i] == ')') && (input[i - 1] == '('))
        {
            count--;
            sum += count;
        }
        else if ((input[i] == ')') && (input[i - 1] == ')'))
        {
            sum++;
            count--;
        }
    }
    printf("%d", sum);
}
