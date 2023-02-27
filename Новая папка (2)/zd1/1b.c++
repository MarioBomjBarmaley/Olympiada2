#include <omp.h>

void multiply_matrices(double* A, double* B, double* C, int M, int N, int K) {
    #pragma omp parallel for
