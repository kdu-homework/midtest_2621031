#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "turbo.h"

void main_box() {
	printf("\u250C");
	for (int i = 0; i < 58; i++) printf("\u2500");
	printf("\u2510\n");

	for (int i = 0; i < 20; i++) {
		printf("\u2502");
		for (int k = 0; k < 58; k++) printf(" ");
		printf("\u2502\n");
	}

	printf("\u2514");
	for (int i = 0; i < 58; i++) printf("\u2500");
	printf("\u2518\n");
}
void main_menu() {
	clrscr();
	main_box();
	gotoxy(24, 1); printf("Main  Menu");
	gotoxy(23, 7); printf("1. Data Input");
	gotoxy(23, 8); printf("2. Data Output");
	gotoxy(23, 9); printf("3. Game");
	gotoxy(23, 10); printf("4. Exit");
	gotoxy(23, 18); printf("Select Menu [     ]");
	gotoxy(0, 25);
}
void data_input() {
	clrscr();
	main_box();
	gotoxy(24, 1); printf("Data Input");
	gotoxy(23, 18); printf("Press Any key to Main Menu");
	gotoxy(0, 25);

}
void data_output() {
	clrscr();
	main_box();
	gotoxy(24, 1); printf("Data Output");
	gotoxy(23, 18); printf("Press Any key to Main Menu");
	gotoxy(0, 25);
}
void data_search() {
	clrscr();
	main_box();
	gotoxy(24, 1); printf("Data Search");
	gotoxy(23, 18); printf("Press Any key to Main Menu");
	gotoxy(0, 25);
}
void bye() {
	clrscr();
	main_box();
	gotoxy(24, 1); printf("Data terminated");
	gotoxy(23, 18); printf("Press Any key to Main Menu");
	gotoxy(0, 25);
}
void main() {
	int menu;
	char anykey;
	while (1) {
		main_menu();
		gotoxy(38, 18);

		scanf("%d", &menu);

		switch (menu) {
		case 1:
			data_input();
			break;
		case 2:
			data_output();
			break;
		case 3:
			data_search();
			break;
		case 4:
			bye();
			break;
		}


		if (menu == 4) break;
	}
}