void printarray(int array[], int size){
    printf("Print Array elements in normal order: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void printreversearray(int array[], int size){
    printf("Print Array elements in reverse order: \n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int maximumelement(int array[], int size){
    printf("Maximum element in the array: ");

    int max = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int findinteger(int array[], int size, int findinteger) {
    for (int i = 0; i < size; i++) {
        if (array[i] == findinteger) {
            return 1;
        }
    }

    return 0;
}