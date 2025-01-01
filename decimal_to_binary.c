#include <stdio.h>

void decimal_to_binary(num) {
	int index = 0; //Initialisation
	int bin[32]; //32-bit binary number (up to)

	if (num == 0) {
		printf("0");
	} else {

		while (num > 0) {
			bin[index] = num % 2;
			num = num / 2;
			index++; //Incrementing index to move to the next step
		}

		printf("Binary output: ");
		for (int i = index - 1; i >= 0; i--) {
			printf("%d", bin[i]);
		}
	}
	printf("\n"); //Formatting done in function to save space; otherwise new line would have to be done each time the function is implemented
}

int main() {
	int num; //Variable declaration done outside loop so it's not declared each time the loop runs
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
