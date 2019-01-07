/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* planet.c (Chapter 13, page 304) */
/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9
#define SL 20

int compare_strings(char *a, char *b);

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};
    int i, j;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)

            if (compare_strings(argv[i], planets[j]) == 0)
            {
                printf("%s is planet #%d\n", planets[j], j + 1);
                break;
            }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}

int compare_strings(char *a, char *b)
{
    int i;
    for (i = 0; tolower(a[i]) == tolower(b[i]); i++)
        if (a[i] == '\0')
            return 0;
    return a[i] - b[i];

}
