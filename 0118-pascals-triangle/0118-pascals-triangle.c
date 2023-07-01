/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
long long nCr(int n, int r) {
    long long res = 1;

    // calculating nCr
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}


int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    // Allocate memory for the result
    int** ans = (int**)malloc(numRows * sizeof(int*));

    // Allocate memory for returnColumnSizes
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    // Store the entire Pascal's triangle
    for (int row = 0; row < numRows; row++) {
        // Allocate memory  for the current row
        ans[row] = (int*)malloc((row + 1) * sizeof(int));

        for (int col = 0; col <= row; col++) {
            ans[row][col] = (int)nCr(row, col);
        }

        // Set the number of columns for the current row in returnColumnSizes
        (*returnColumnSizes)[row] = row + 1;
    }

    // Set the number of rows in returnSize
    *returnSize = numRows;

    return ans;
}