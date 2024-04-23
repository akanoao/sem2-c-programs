#include <stdio.h>
// int main(){
//    int mat1[3][3] = {{1, 2 ,3}, {4, 5, 6}, {7, 8, 9}};
//    int mat2[3][3] = {{1, 2 ,3}, {4, 5, 6}, {7, 8, 9}};
//    int mat3[3][3];
//    for(int i = 0; i < 3; i++){
//        for(int j = 0; j < 3; j++){
//            mat3[i][j] = mat1[i][j] + mat2[i][j];
//        }
//    }
//    for(int i = 0; i < 3; i++){
//        for(int j = 0; j < 3; j++){
//            printf("%5d", mat3[i][j]);
//        }
//        printf("\n");
//    }
// }
//int main(){
//    int mat1[3][3] = {{1, 2 ,3}, {4, 5, 6}, {7, 8, 9}};
//    int mat2[3][3] = {{1, 2 ,3}, {4, 5, 6}, {7, 8, 9}};
//    int mat3[3][3];
//    for(int i = 0; i < 3; i++){
//        for(int j = 0; j < 3; j++){
//            mat3[i][j] = mat1[i][j] - mat2[i][j];
//        }
//    }
//    for(int i = 0; i < 3; i++){
//        for(int j = 0; j < 3; j++){
//            printf("%d", mat3[i][j]);
//        }
//        printf("\n");
//    }
//}
// int main(){
//     int mat1[3][3] = {{1, 2 ,3}, {4, 5, 6}, {7, 8, 9}};
//     int mat2[3][3] = {{1, 2 ,3}, {4, 5, 6}, {7, 8, 9}};
//     int mat3[3][3];
//     int store = 0;
//     for(int row = 0; row < 3; row++){
//         for(int col = 0; col < 3; col++){
//             store = 0;
//             for(int j = 0; j < 3; j++){
//                 store = store+ (mat1[row][j] * mat2[j][col]);
//             }
//             mat3[row][col] = store;
//         }
//     }
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%5d ", mat3[i][j]);
//         }
//         printf("\n");
//     }
// }

int main(void){
    int mat[3][3] = {{1, 2 ,3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    // printf("start");
    // for (i = 0; i < 3; i++){
    //     for (j = 0; j< 3;  j++){
    //         scanf("%d", &mat[i][j]);
    //     }
    // }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum += mat[i][j];
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("sum = %5d ", sum);
    return 0;
}