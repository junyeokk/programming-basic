#include <limits.h>
#include <stdio.h>

double getJudgeData() {
    double temp;
    while (1) {
        scanf("%lf", &temp);
        if (temp >= 0 && temp <= 10) {
            return temp;
            break;
        }
    }
}

double findLowest(double d[], int n) {
    double min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (min > d[i])
            min = d[i];
    }
    return min;
}

double findHighest(double d[], int n) {
    double max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (max < d[i])
            max = d[i];
    }
    return max;
}

void calcScore(double d[], int n) {
    double res = 0;
    for (int i = 0; i < n; i++) {
        res += d[i];
    }

    res = (res - findLowest(d, n) - findHighest(d, n)) / (n - 2);
    printf("%.2lf", res);
}

int main() {
    int n;
    double score[10001];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // 점수 입력 및 유효성 검증
        score[i] = getJudgeData();
    }

    calcScore(score, n);
}