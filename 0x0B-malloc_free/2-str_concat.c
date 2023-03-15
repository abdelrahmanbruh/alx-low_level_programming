#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2) {
if (!s1) s1 = "";
if (!s2) s2 = "";

size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
char *result = malloc(len1 + len2 + 1);

if (!result) return NULL;

memcpy(result, s1, len1);
memcpy(result + len1, s2, len2 + 1);

return result;
}
