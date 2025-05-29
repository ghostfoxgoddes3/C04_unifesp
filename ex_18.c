#include <stdio.h>

int main()
{
    int V[10], x, mul[10], j = 0;
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &V[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < 10; ++i)
    {
        if (V[i] % x == 0)
        {
            mul[j] = V[i];
            ++j;
        }
    }

    printf("%d numbers of the vector are multiples of %d.", j, x);

    for (int i = 0; i < j; ++i)
    {
        printf("\n%d", mul[i]);
    }
}
