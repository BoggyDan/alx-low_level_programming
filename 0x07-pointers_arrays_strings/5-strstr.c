#include "main.h"
/* for strstr() */
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to the main string to be scanned
 * @needle: pointer to the substring to be searched within @haystack string
 *
 *
 * Return: pointer to the fist occurence in @haystack
 * of any of the entire sequence of characters specified in @needle
 * or a NULL pointer if the sequence is not found in @haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *res;

	res = strstr(haystack, needle);

	return (res);
}

