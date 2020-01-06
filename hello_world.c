/*
 ============================================================================
 Name        : hello_world.c
 Author      : Gordon Young
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char* bee = "\U0001F41D";
	const char martini[5] = {0xF0, 0x9F, 0x8D, 0xB8, '\0'};
	char* aubergine = "\U0001F346";
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	puts(bee);
	puts(martini);
	puts(aubergine);
	return EXIT_SUCCESS;
}
