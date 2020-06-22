#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#define SEPARATOR " "

int genAnagram(const char arg[MAX_LENGTH]) {
    char argcpy[MAX_LENGTH];
    char* istr = strtok(strcpy(argcpy, arg), SEPARATOR);

    while (istr != NULL)
    {
        int n = strlen(istr);
        for (int i = n - 1; i >= 1; i--)
        {
            srand(time(nullptr) * rand() * i);
            int j = (0 + rand() % (i + 1));
            char tmp = istr[j];
            istr[j] = istr[i];
            istr[i] = tmp;
        }
        for (int i = 0; i < n; i++) putchar((char)tolower(istr[i]));
        putchar(' ');
        istr = strtok(NULL, SEPARATOR);
    }
    putchar('\n');
    return 1;
}