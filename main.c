#include <stdio.h>
#include "adjacent-matrix/adjacent-matrix.h"

int main() {
    int a[6] = {1, 2,3,4,5,6};
    adj_matrix mat = create_matrix(2,3,a);
    print_matrix(mat);
    hello_world();
    return 0;
}