#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 假设加速度数据结构体
typedef struct {
    double x;
    double y;
    double z;
} AccelerationData;

// 读取加速度数据的函数（这里用模拟数据代替）
void readAccelerationData(AccelerationData *data, int numSamples) {
    // 这里应该读取实际的加速度数据
    // 例如从传感器或通过文件读取
    // 这里用模拟数据代替
    for (int i = 0; i < numSamples; i++) {
        data[i].x = rand() % 100 - 50; // 模拟x轴加速度，-50到50之间
        data[i].y = rand() % 100 - 50; // 模拟y轴加速度，-50到50之间
        data[i].z = rand() % 100 - 50; // 模拟z轴加速度，-50到50之间
    }
}

// 计算加速度向量的模（大小）
double calculateMagnitude(AccelerationData *data) {
    return sqrt(data->x * data->x + data->y * data->y + data->z * data->z);
}

// 识别动作的函数
void recognizeAction(AccelerationData *data, int numSamples) {
    double thresholdLiftDrop = 20.0; // 抬起放下的阈值
    double thresholdMove = 10.0;     // 前移后移的阈值
    double thresholdShake = 50.0;    // 用力摇晃的阈值（考虑加速度变化率）
    double thresholdMoveLarge = 30.0;// 搬动的阈值（考虑持续的大加速度）
    double thresholdMusicVibration = 2.0; // 音乐振动的阈值（小幅度高频振动）
    
    double prevMagnitude = 0.0;
    double prevChange = 0.0;
    int shakeCount = 0;
    int largeMoveDuration = 0;
    
    for (int i = 0; i < numSamples; i++) {
        double currentMagnitude = calculateMagnitude(&data[i]);
        double change = fabs(currentMagnitude - prevMagnitude);
        
        if (currentMagnitude > thresholdLiftDrop) {
            printf("Detected: Lift or Drop\n");
        } else if ((data[i].x > thresholdMove || data[i].x < -thresholdMove) ||
                   (data[i].y > thresholdMove || data[i].y < -thresholdMove)) {
            printf("Detected: Forward or Backward Move\n");
        } else if (change > thresholdShake && shakeCount < 5) { // 简单模拟摇晃，需要多次检测
            shakeCount++;
            if (shakeCount == 5) {
                printf("Detected: Forceful Shake\n");
                shakeCount = 0; // 重置摇晃计数器
            }
        } else if (currentMagnitude > thresholdMoveLarge) {
            largeMoveDuration++;
            if (largeMoveDuration > 10) { // 假设持续10个样本点以上为大搬动
                printf("Detected: Moving or Lifting a Heavy Object\n");
                largeMoveDuration = 0; // 重置搬动计数器
            }
        } else if (currentMagnitude < thresholdMusicVibration && i > 1 &&
                   fabs(data[i].x - data[i-1].x) < 1 &&
                   fabs(data[i].y - data[i-1].y) < 1 &&
                   fabs(data[i].z - data[i-1].z) < 1) {
            // 简单模拟音乐振动，需要小幅度且高频变化
            static int vibrationCount = 0;
            vibrationCount++;
            if (vibrationCount % 10 == 0) { // 每10个样本点检测一次
                printf("Detected: Music Vibration\n");
            }
        }
        
        prevMagnitude = currentMagnitude;
        prevChange = change;
    }
}

int main() {
    int numSamples = 100; // 假设有100个加速度数据样本
    AccelerationData data[100];
    
    readAccelerationData(data, numSamples);
    recognizeAction(data, numSamples);
    
    return 0;
}