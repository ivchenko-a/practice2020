#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

void invalidInput();
void outputHelp();
void outputGenerator();

void outputMenu() {
	do
	{
		printf("Anagram generator. Made by Ivchenko A. 515b\n");
		printf("Press f1 to get help | Press 1 to generate anagram | Press 0 to exit\n");
		int key = _getch();
		switch (key)
		{
		case 59: outputHelp(); break;
		case 49: outputGenerator(); break;
		case 48: exit(EXIT_SUCCESS); break;
		default: break;
		}
		system("cls");
	} while (true);
}

void invalidInput() {
	system("cls");
	printf("Inputed value is incorrect. Try again!");
	Sleep(1000);
}

void outputHelp() {
	system("cls");
	// Do something
	system("pause");
}

void outputGenerator() {
	system("cls");
	char text[MAX_LENGTH];
	printf_s("Enter text (max %d symbols): ", MAX_LENGTH - 1);
	fgets(text, MAX_LENGTH - 1, stdin);
	for (int i = 0; i < MAX_LENGTH; i++)
	{
		if (text[i] == '\n') {
			text[i] = '\0';
			break;
		}
	}

	printf("Source text: %s\n", text);
	printf("Generated anagram: ");
	genAnagram(text);
	do
	{
		printf("Press 1 to regenerate anagram | Press 2 to generate one more | Press 0 to exit to main menu\n");
		int key = _getch();
		switch (key)
		{
		case 50:
			system("cls");
			outputGenerator();
			return;
		case 49:
			system("cls");
			printf("Source text: %s\n", text);
			printf("Generated anagram: ");
			genAnagram(text);
			break;
		case 48: return; break;
		default: break;
		}
	} while (true);
}