#include"main.h"
/**
 * _strcmp - compares two strings
 * s1: pointer to first string
 * s2: pointer to second string
 * Return: if str1 < str2, negative difference of first unmatched char
 * 	   if str1 == str2, 0
 * 	   if str1 > str2, positive difference of first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
