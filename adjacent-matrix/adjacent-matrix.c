#include "adjacent-matrix.h"
#include <stdlib.h>

int hello_world() {
    printf("Hello world!\n");
    return 0;
}

adj_matrix create_matrix(int cols, int rows, int* elements) {
    int size = cols * rows;
    int *a = calloc(size, sizeof(int));
    return (adj_matrix){cols,rows, elements};
}

void print_matrix(adj_matrix matrix) {
    int size = matrix.cols * matrix.rows;
    for (int i = 0 ; i < size; i ++) {
        printf("%d ", *(matrix.elements + i));
    }
}