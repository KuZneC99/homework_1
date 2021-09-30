#include <stdio.h>
int main() {
	printf("I need your number..!\n");
	char boba;
	while ((boba = getchar()) && boba != '\n' && boba != '\0') {
		switch (boba) {
		case '.':
			printf(" | ");
			break;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			printf("%c", boba);
			break;
		}
	}
	printf("	-get it back! ha-ha-HA!\n");
}