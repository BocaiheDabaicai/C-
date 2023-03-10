//
// Created by NfryCreator on 2023/3/9.
//

#include <stdio.h>

int main(void) {
    int row1_col1, row1_col2, row1_col3, row1_col4, row2_col1, row2_col2, row2_col3, row2_col4, row3_col1, row3_col2, row3_col3, row3_col4, row4_col1, row4_col2, row4_col3, row4_col4;
    int row1_sum, row2_sum, row3_sum, row4_sum, col1_sum, col2_sum, col3_sum, col4_sum, diagonal_left, diagonal_right;
    printf("Enter the numbers from 1 to 16 in any order:");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &row1_col1, &row1_col2, &row1_col3, &row1_col4, &row2_col1,
          &row2_col2, &row2_col3, &row2_col4, &row3_col1, &row3_col2, &row3_col3, &row3_col4, &row4_col1, &row4_col2,
          &row4_col3, &row4_col4);
    printf("%d\t%d\t%d\t%d\n", row1_col1, row1_col2, row1_col3, row1_col4);
    printf("%d\t%d\t%d\t%d\n", row2_col1, row2_col2, row2_col3, row2_col4);
    printf("%d\t%d\t%d\t%d\n", row3_col1, row3_col2, row3_col3, row3_col4);
    printf("%d\t%d\t%d\t%d\n", row4_col1, row4_col2, row4_col3, row4_col4);
    row1_sum = row1_col1 + row1_col2 + row1_col3 + row1_col4;
    row2_sum = row2_col1 + row2_col2 + row2_col3 + row2_col4;
    row3_sum = row3_col1 + row3_col2 + row3_col3 + row3_col4;
    row4_sum = row4_col1 + row4_col2 + row4_col3 + row4_col4;
    printf("Row sums: %d %d %d %d\n", row1_sum, row2_sum, row3_sum, row4_sum);
    col1_sum = row1_col1 + row2_col1 + row3_col1 + row4_col1;
    col2_sum = row1_col2 + row2_col2 + row3_col2 + row4_col2;
    col3_sum = row1_col3 + row2_col3 + row3_col3 + row4_col3;
    col4_sum = row1_col4 + row2_col4 + row3_col4 + row4_col4;
    printf("Column sums: %d %d %d %d\n", col1_sum, col2_sum, col3_sum, col4_sum);
    diagonal_left = row1_col1 + row2_col2 + row3_col3 + row4_col4;
    diagonal_right = row1_col4 + row2_col3 + row3_col2 + row4_col1;
    printf("Diagonal sums: %d %d\n", diagonal_left, diagonal_right);

    return 1;
}