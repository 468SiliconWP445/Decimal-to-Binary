#include <stdio.h>

void decimal_to_binary(num) {
	int index = 0;
	int bin[32]; //array for 32 bit binary number

	if (num == 0) {
		printf("0");
	} else {

		while (num > 0) {
			bin[index] = num % 2;
			num = num / 2;
			index++;
		}

		printf("Binary output: ");
		for (int i = index - 1; i >= 0; i--) {
			printf("%d", bin[i]);
		}
	}
	printf("\n");
}

int main() {
	int num;
	int x = 0;
	while (x != 1) {
		printf("Enter a Decimal (Denary) number: ");
		scanf_s("%d", &num);
		decimal_to_binary(num);
		printf("Enter 1 to end the program, enter 0 to continue: ");
		scanf_s("%d", &x);
	}
	return 0;
}
