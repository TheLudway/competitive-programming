#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <numeric>
#include <cmath>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    double L = 20.0, W = 40.0;
    int N = 100000000; // 10^6

    // Random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> distX(0.0, W);
    std::uniform_real_distribution<double> distY(0.0, L);

    // Generate random values
    std::vector<double> X1(N), X2(N), Y1(N), Y2(N);
    for (int i = 0; i < N; ++i) {
        X1[i] = distX(gen);
        X2[i] = distX(gen);
        Y1[i] = distY(gen);
        Y2[i] = distY(gen);
    }

    // Compute centroids (Cx, Cy)
    std::vector<double> Cx(N), Cy(N);
    for (int i = 0; i < N; ++i) {
        Cx[i] = (X1[i] + X2[i]) / 2.0;
        Cy[i] = (Y1[i] + Y2[i]) / 2.0;
    }

    // Compute radius R
    std::vector<double> R(N);
    for (int i = 0; i < N; ++i) {
        R[i] = std::sqrt(std::pow(X1[i] - X2[i], 2) + std::pow(Y1[i] - Y2[i], 2)) / 2.0;
    }

    // Compute I (logical condition checking)
    std::vector<int> I(N);
    for (int i = 0; i < N; ++i) {
        I[i] = (0 <= (Cx[i] - R[i])) && ((Cx[i] + R[i]) <= W) &&
               (0 <= (Cy[i] - R[i])) && ((Cy[i] + R[i]) <= L);
    }

    // Compute mean of I
    double mean_I = std::accumulate(I.begin(), I.end(), 0.0) / N;
    auto stop = std::chrono::high_resolution_clock::now();
    std::cout << "Mean of I: " << std::fixed << std::setprecision(4) << mean_I << std::endl;
    std::chrono::duration<double> duration = stop - start;
    std::cout << "Tiempo tomado : " << duration.count() << " segundos" << std::endl;
    return 0;
}
