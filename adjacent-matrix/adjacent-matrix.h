#ifndef ADJACENTMATRIX
#define ADJACENTMATRIX

#include <stdio.h>


int hello_world();




typedef struct adjacent_matrix {
    int cols;
    int rows;
    int *elements;
} adj_matrix;

adj_matrix create_matrix(int cols, int rows, int* elements);
void print_matrix(adj_matrix matrix);

#endif // ADJACENTMATRIX