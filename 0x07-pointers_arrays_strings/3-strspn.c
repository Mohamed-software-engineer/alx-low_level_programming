#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strspn -  gets the length of a prefix substring
 * @s: array of char
 * @accept: array of char
 * Return: number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	 unsigned int count = 0;
    while (*s != '\0' && strchr(accept, *s) != NULL) {
        count++;
        s++;
    }
    return count;
}
