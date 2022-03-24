#include<stdio.h>

void printPascal(int n) {
    int arr[n][n];

    for (int row = 0; row < n; row++) {
        for (int col = 0; col <= row; col++) {
            if (col == 0 || col == row) {
                arr[row][col] = 1;
            } else {
                arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
            }

            printf("%6d", arr[row][col]);
        }

        printf("\n");
    }
}

int main()
{
    printf("Enter an number: ");
    int num;
    scanf("%d", &num);
    printPascal(num);
	return 0;
}
