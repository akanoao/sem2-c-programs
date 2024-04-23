#include <stdio.h>

// Function to read a matrix
void readMatrix(int matrix[][10], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int mat1[][10], int mat2[][10], int res[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int mat1[][10], int mat2[][10], int res[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            res[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[][10], int mat2[][10], int res[][10], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to find transpose of a matrix
void transposeMatrix(int mat[][10], int res[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            res[j][i] = mat[i][j];
        }
    }
}

// Function to find upper triangular matrix
void upperTriangularMatrix(int mat[][10], int rows, int cols) {
    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j < i) {
                printf("0\t");
            } else {
                printf("%d\t", mat[i][j]);
            }
        }
        printf("\n");
    }
}

// Function to find lower triangular matrix
void lowerTriangularMatrix(int mat[][10], int rows, int cols) {
    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j > i) {
                printf("0\t");
            } else {
                printf("%d\t", mat[i][j]);
            }
        }
        printf("\n");
    }
}

int main(void) {
    int choice, rows1, cols1, rows2, cols2;
    int mat1[10][10], mat2[10][10], result[10][10];
    int flag = 1;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    readMatrix(mat1, rows1, cols1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    readMatrix(mat2, rows2, cols2);
    while(flag){
        printf("MENU:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Product\n");
        printf("4. Transpose\n");
        printf("5. Upper Triangular Matrix\n");
        printf("6. Lower Triangular Matrix\n");
        printf("7. quit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rows1 == rows2 && cols1 == cols2) {
                    addMatrices(mat1, mat2, result, rows1, cols1);
                    displayMatrix(result, rows1, cols1);
                } else {
                    printf("Matrices cannot be added as they have different dimensions.\n");
                }
                break;
            case 2:
                if (rows1 == rows2 && cols1 == cols2) {
                    subtractMatrices(mat1, mat2, result, rows1, cols1);
                    displayMatrix(result, rows1, cols1);
                } else {
                    printf("Matrices cannot be subtracted as they have different dimensions.\n");
                }
                break;
            case 3:
                if (cols1 == rows2) {
                    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);
                    displayMatrix(result, rows1, cols2);
                } else {
                    printf("Matrices cannot be multiplied as the number of columns in the first matrix is not equal to the number of rows in the second matrix.\n");
                }
                break;
            case 4:
                printf("Transpose of the first matrix:\n");
                transposeMatrix(mat1, result, rows1, cols1);
                displayMatrix(result, cols1, rows1);
                break;
            case 5:
                if (rows1 == cols1) {
                    upperTriangularMatrix(mat1, rows1, cols1);
                } else {
                    printf("Matrix should be square to find upper triangular matrix.\n");
                }
                break;
            case 6:
                if (rows1 == cols1) {
                    lowerTriangularMatrix(mat1, rows1, cols1);
                } else {
                    printf("Matrix should be square to find lower triangular matrix.\n");
                }
                break;
            case 7:
                flag = 0;
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
