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
#include<stdlib.h>
#include<time.h>

int main() {
	const int SIZE = 20, MIN = 0, MAX = 100;
	srand(time(NULL));

	int random_arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		random_arr[i] = MIN + rand() % (MAX - MIN + 1);
	}

	printf("All elements in the array:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", random_arr[i]);
	}
	printf("\n");

	int count = 0;
	printf("All elements between 50 and 100: \n");
	for (int i = 0; i < SIZE; i++) {
		if (random_arr[i] >= 50 && random_arr[i] <= 100) {
			printf("%d ", random_arr[i]);
			count++;
		}
	}
	printf("\nThere are %d numbers between 50 and 100\n", count);

	return 0;
}