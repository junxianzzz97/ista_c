#include <stdio.h>

int prime(int x)
{
    if (x >= 1)
    {
        if (x == 1)
            return x;
        if (x == 2)
            return x;
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
                return 0;
        }
        return x;
    }
    else
        return 0;
}

int maxprime(int x)
{
    int max = 0;
    for (int i = 1; i < x; i++)
    {
        if (prime(i) > max)
            max = prime(i);
    }
    return max;
}

int main()
{
    int x;
    
    
    while (scanf("%d", &x)!=EOF)
    {
        printf("%d\n", maxprime(x));
        
    }
    
    return 0;
}