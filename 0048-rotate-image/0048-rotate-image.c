// first transpose the matrix 
// then reverse each row


void swap(int **matrix, int i, int j) {
    int temp = matrix[i][j];
    matrix[i][j] = matrix[j][i];
    matrix[j][i] = temp;
}

void reverse(int* arr, int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    if (matrixSize == 0) {
        return;
    }
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < i; j++) {
            swap(matrix, i, j);
        }
    }

    for (int i = 0; i < matrixSize; i++) {
        reverse(matrix[i], *matrixColSize);
    }
}