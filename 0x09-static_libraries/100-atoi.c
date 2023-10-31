#include "main.h"

int _atoi(char *s)
{
    int sign = 1, resp = 0, firstNum, i;
    for (firstNum = 0; !(s[firstNum] >= '0' && s[firstNum] <= '9'); firstNum++)
    {
        if (s[firstNum] == '-')
            sign *= -1;
    }
    for (i = firstNum; s[i] >= '0' && s[i] <= '9'; i++)
    {
        resp = (resp * 10) + (s[i] - '0');
    }
    return (sign * resp);
}

