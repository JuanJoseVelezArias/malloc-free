#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
    if (str == NULL)
    {
        return NULL;
    }

    int size = strlen(str);    //**counts the number of characters in the string **//

    char *duplicated = (char *)malloc((size + 1) * sizeof(char));
    if (duplicated == NULL)
    {
        return NULL;
    }

    strcpy(duplicated, str);  //** copy the strings **//

    return duplicated;
}