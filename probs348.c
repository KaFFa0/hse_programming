#include <stdio.h>

int counter(int num);
int task3(int num);
int task4(int num);
int task8(int n);

int main() {
    printf("%d\n",task3(999));
    printf("%d\n",task4(999));
    printf("%d\n",task8(5));
}


int counter(int num) {
    int count = 0;

    while (num > 0) {
        if (num % 10 == 7) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int task3(int num) {
    int cnt = 0;
    for (int i = 1; i < num; i++) {
        switch (counter(i)) {
            case 1:
            cnt++;
            break;

            case 2:
            cnt += 2;
            break;

            case 3:
            cnt += 3;
        }
    }
    return cnt;
}

int task4(int num) {
    int cnt = 0;
    for (int i = 1; i < num;i++) {
        if (counter(i) >= 1) {
            cnt++;
        }
    }
    return cnt;
}


int task8(int n) {
    int start = 1 + ((2 + 2*(n-1))/2) * (n-1);
    int sum = ((start + (start + 2*(n-1)))/2) * n;
    return sum;
}
