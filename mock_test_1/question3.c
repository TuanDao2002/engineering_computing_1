/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2022A
  Lab Assessment: 1
  Author: Dao Kha Tuan
  ID: s3877347
  Compiler used: 8.1.0
  Created  date: 23/02/2002
  Acknowledgement: None
*/

#include<stdio.h>

int main() {
	int num;
	while(1) {
		printf("Enter a number (1 - 10): ");
		scanf("%d", &num);
		if (num < 0 || num > 10) {
			printf("Invalid Number\n");
		} else {
			break;
		}
	}

	for (int row = 1; row <= num; row++) {
		for (int col = num; col >= 1; col--) {
			if (row + col - num > 0) {
				printf("%4d", row + col - num);
			} else if (row == 1) {
				printf("%4d", num + 1 - col);
			} else if (col == 1) {
				printf("%4d", num + 1 - row);
			} else {
				printf("%*c", 4, ' '); // 4 spaces
			}
		}

		printf("\n");
	}

	return 0;
}