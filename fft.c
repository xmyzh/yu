#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

#define PI 3.14159265358979323846

// 递归FFT函数
void fft(complex double *X, int n) {
    if (n <= 1) return;

    // 将输入数组分成偶数和奇数索引的元素
    complex double X_even[n/2];
    complex double X_odd[n/2];
    for (int i = 0; i < n/2; i++) {
        X_even[i] = X[i*2];
        X_odd[i] = X[i*2 + 1];
    }

    // 递归地对偶数和奇数数组进行FFT
    fft(X_even, n/2);
    fft(X_odd, n/2);

    // 组合结果
    for (int k = 0; k < n/2; k++) {
        complex double t = cexp(-2.0 * I * PI * k / n) * X_odd[k];
        X[k] = X_even[k] + t;
        X[k + n/2] = X_even[k] - t;
    }
}

int main() {
    int n = 8; // 假设数据点数是8，它应该是2的幂
    complex double X[n];

    // 初始化输入数据（这里使用示例数据）
    for (int i = 0; i < n; i++) {
        X[i] = cos(2.0 * PI * i / n) + I * sin(2.0 * PI * i / n); // 示例：单位根
    }

    // 执行FFT
    fft(X, n);

    // 打印结果
    printf("FFT result:\n");
    for (int i = 0; i < n; i++) {
        printf("X[%d] = %.5f + %.5fi\n", i, creal(X[i]), cimag(X[i]));
    }

    return 0;
}