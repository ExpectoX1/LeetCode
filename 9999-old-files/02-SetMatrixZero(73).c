void rowx(int i, int m, int **matrix) { // mark 
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -999;
        }
    }
}

void rowy(int j, int *n, int **matrix) { // mark 
    for (int i = 0; i < *n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -999;
        }
    }
}

void setZeroes(int **matrix, int matrixSize, int *matrixColSize) {
    int m = matrixSize;
    int n = *matrixColSize;

    printf("%d x %d\n", m, n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rowx(i, n, matrix);
                rowy(j, &m, matrix);
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == -999) {
                matrix[i][j] = 0;
            }
        }
    }
}
