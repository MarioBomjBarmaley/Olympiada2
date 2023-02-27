#include <omp.h>

void multiply_matrices(double* A, double* B, double* C, int M, int N, int K) {
    #pragma omp parallel for
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            C[i*N + j] = 0;
            for (int k = 0; k < K; ++k) {
                C[i*N + j] += A[i*K + k] * B[k*N + j];
            }
        }
    }
}