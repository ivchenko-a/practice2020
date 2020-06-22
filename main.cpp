#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

int main(void) {
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    outputMenu();
    system("pause");
}