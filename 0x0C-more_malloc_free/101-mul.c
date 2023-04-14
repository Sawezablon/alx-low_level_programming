#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }
    return (len);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
    char *s1, *s2;
    int l1, l2, l, d1, d2, *res, a = 0, c = 0;

    s1 = argv[1], s2 = argv[2];
    if (argc != 3 || !is_digit(s1) || !is_digit(s2))
        errors();
    l1 = _strlen(s1);
    l2 = _strlen(s2);
    l = l1 + l2 + 1;
    res = malloc(sizeof(int) * l);
    if (!res)
        return (1);
    for (int i = 0; i <= l1 + l2; i++)
        res[i] = 0;
    for (l1 = l1 - 1; l1 >= 0; l1--)
    {
        d1 = s1[l1] - '0';
        c = 0;
        for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
        {
            d2 = s2[l2] - '0';
            c += res[l1 + l2 + 1] + (d1 * d2);
            res[l1 + l2 + 1] = c % 10;
            c /= 10;
        }
        if (c > 0)
            res[l1 + l2 + 1] += c;
    }
    for (int i = 0; i < l - 1; i++)
    {
        if (res[i])
            a = 1;
        if (a)
            putchar(res[i] + '0');
    }
    if (!a)
        putchar('0');
    putchar('\n');
    free(res);
    return (0);
}
