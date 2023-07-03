void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    int m = *matrixColSize;

    int marky[n];
    int markn[m];

    memset(marky, 0, sizeof(marky));
    memset(markn, 0, sizeof(markn));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                marky[i] = 1;
                markn[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (marky[i] == 1 || markn[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }
}
