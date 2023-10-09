#include <stdlib.h>

/**
* _strlen - returns string length
* @s: the string
* Return: length of the string as an integer
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return (len);
}

/**
* string_nconcat - a function that concatenates two strings.
* @s1: first string
* @s2: second string
* @n: number of bytes to take from second string
* Return: A pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j;
char *str;
/* We first get the length of each string */
unsigned int n1 = (s1 == NULL) ? 0 : _strlen(s1);
unsigned int n2 = (s2 == NULL) ? 0 : _strlen(s2);
/* take the given n only if it is smaller than the whole string length */
if (n < n2)
n2 = n;
/* we allocate memory for the concatenated string + the null character */
str = malloc(n1 + n2 + 1);
if (str == NULL)
return (NULL);
/* copy the first and second strings */
for (j = 0; j < n1; i++, j++)
str[i] = s1[j];
for (j = 0; j < n2; i++, j++)
str[i] = s2[j];
str[i] = '\0';
return (str);
}
