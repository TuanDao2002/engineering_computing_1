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
	// ask user to enter again until the input is between 1 and 10
	while(1) {
		printf("Enter a number (1 - 10): ");
		scanf("%d", &num);
		if (num < 1 || num > 10) {
			printf("Invalid Number\n");
		} else {
			break;
		}
	}

	// for (int row = 1; row <= num; row++) {
	// 	for (int col = num; col >= 1; col--) {
	// 		if (row + col - num > 0) {
	// 			printf("%4d", row + col - num);
	// 		} else if (row == 1) {
	// 			printf("%4d", num + 1 - col);
	// 		} else if (col == 1) {
	// 			printf("%4d", num + 1 - row);
	// 		} else {
	// 			printf("%*c", 4, ' '); // 4 spaces
	// 		}
	// 	}

	// 	printf("\n");
	// }

	for (int row = 1; row <= num; row++) {// this loop for all rows
		/*For each row*/
		if (row == 1) { // if this is the first row, print out all values from 1 to num in a single line
			for (int block = 1; block <= num; block++) {
				printf("%3d", block);
			}

			// move to the next line
			printf("\n");

			// skip the codes below
			continue;
		}

		// if this is not the first row, print out all values backward from row to 1
		for (int block = row; block >= 1; block--) {
			printf("%3d", block);
		}

		// print out block of whitespaces
		for (int block = 1; block <= num - row - 1; block++) {
			printf("   ");
		}

		// if this is not the last row, print out a pattern value at the end of the row
		if (row != num) {
			printf("%3d\n", num + 1 - row);
		}
	}

	return 0;
}