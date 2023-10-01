#include <stdio.h>

void firstline(void);
/**
 * main - prints Multiplication table 10x10 using only putchar 
 * @y: # in rows or (Y-Axis)
 * @x: # in columns or (X-Axis)
 * Return: 0 Successful
 */
int main(void)
{
    firstline();
    for(int y = 1 ; y <= 10 ; y++)
    {
        if(y == 10)
        {
            putchar((y / 10) + 48);
        }
        putchar((y % 10) + 48);
        if(y < 10)
        {
            putchar(' ');
        }
        putchar(' ');
        for(int x = 1 ;x <= 10 ;x++)
        {
            if((y * x) >= 100)
            {
                putchar(((y * x) / 100) + 48);
            }
            if((y * x) >= 10)
            {
                putchar((((y * x) / 10) % 10) + 48);
            }
                putchar(((y * x) % 10) + 48);
            if((y * x) < 10)
            {
                putchar(' ');
            }
            if(x == 10)
            {
                continue;
            } else
            {
                putchar(',');
                putchar(' ');
            }
        }
        putchar(10);
    }
    return (0);
}
/**
 * firstline - print the first line with asterisk in the beginning using only putchar
 * @s:spaces in the beginning
 * @i: for counting #
 * @s2: spaces between #
 */
void firstline(void)
{
    putchar('*');
    for(int s = 1 ;s <= 2 ;s++)
    {
        putchar(' ');
    }
    for(int i = 1 ;i <= 10 ;i++)
    {
        if(i >= 10)
        {
            putchar((i / 10) + 48);
        }
        putchar((i % 10) + 48);
        if(i == 10)
        {
            continue;
        }
        else
        {
            for(int s2 = 1 ;s2 <= 3 ;s2++)
            {
                putchar(' ');
            }
        }
    }
    putchar(10);
}
