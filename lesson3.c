#include <stdio.h>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();


int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();
    task10();
}

void task1() {
    int arr[14];
    int num;
    int evens, sum_evens;
    for(int i = 0;i<14;i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    for(int i = 0;i<14;i++) {
        if (arr[i] % 2 == 0) {
            evens++;
            sum_evens += arr[i];
        }
    }
    printf("Amount - %d the sum - %d\n", evens, sum_evens);
}

void task2() {
    int arr[17];
    int num, sum_odds;

    for(int i = 0;i<17;i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    for(int i = 0;i<17;i++) {
        if(arr[i] % 2 != 0) {
            sum_odds += arr[i];
        }
    }

    for(int i = 0;i<17;i++) {
        if(arr[i] % 3 == 0) {
            arr[i] = sum_odds;
        }
    }

    for(int i = 0;i<17;i++) {
        printf("%d ", arr[i]);
    }

}

void task3() {
    float arr[14];
    float num;
    for(int i = 0;i<14;i++) {
        scanf("%lf", &num);
        arr[i] = num;
    }

    for(int i = 0; i < 8; i++) {
        for(int j = i + 1; j < 8; j++) {
            if(arr[i] > arr[j]) {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 8; i > 7 && i < 14; i++) {
        for(int j = i + 1; j > 7 && j < 14; j++) {
            if(arr[i] < arr[j]) {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < 14; i++) {
        printf("%lf\n ", arr[i]);
    }
}

void task4() {
    float arr[12];
    float num;
    for(int i = 0;i<12;i++) {
        scanf("%d", &num);
        arr[i] = num;
    }
    int min = 0;
    int max = 0;

    for(int i = 1; i < 12;i++) {
        if(arr[i] < arr[min]) {
            min = i;
        }
        else if(arr[i] > arr[max]) {
            max = i;
        }

    }
    printf("%d\n", max - min);


}

void task5() {
    int arr[15];
    int num, neg_nums, zeros;
    int prod = 1;

    for(int i = 0;i<15;i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i = 0;i < 15;i++) {
        if (arr[i] < 0) {
            neg_nums++;
        }
        else if (arr[i] == 0) {
            zeros++;
        }
        else {
            prod *= arr[i];
        }
    }
    printf("%d %d %d\n", neg_nums, prod, zeros);
}

void task6() {
    float arr[12];
    float num;
    
    for (int i = 0; i < 12; i++) {
        scanf("%f", &num);
        arr[i] = num;
    }

    int min, max = 0;
    
    for(int i = 1; i < 12;i++) {
        if(arr[i] < arr[min]) {
            min = i;
        }
        else if(arr[i] > arr[max]) {
            max = i;
        }

    }
    printf("%lf %lf\n", arr[max] + 1, arr[min] - 1);

}

void task7() {
    int arr[19];
    int num;
    int sum = 0;

    for (int i = 0; i < 19; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i = 0; i < 19; i++) {
        if (arr[i] > 0) {
            sum += arr[i];

        }
        else {
            printf("%d\n", sum);
            break;
        }
        if(i == 18) {
            printf("%d", -1);
        }
    }


}

void task8() {
    int arr[4][4]; //[row][column]
    int num;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &num);
            arr[i][j] = num;
        }
        
    }
    for (int i = 0; i < 4; i++) {
        printf("\n");
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
    } //исходная матрица
    printf("\n");

    for (int i = 0; i < 4; i++) {
        printf("\n");
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[j][i]);
        }
    } //транспонированная матрица
    
}

void task9() {
    int arr[4][4]; //[row][column]
    int num;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &num);
            arr[i][j] = num;
        }
        
    }

    for (int i = 0; i < 4; i++) {
        printf("\n");
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
    } //исходная матрица
    printf("\n");

    int j = 1;
    for (int i = 0; i < 4; i++) {
            int temp = arr[i][j-1];
            arr[i][j-1] = arr[i][4-j];
            arr[i][4-j] = temp;
            j++;
    }

    for (int i = 0; i < 4; i++) {
        printf("\n");
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
    
}

void task10() {
    int arr[5][5];
    int num;

    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &num);
            arr[i][j] = num;
        }
    }

    int min = 1000000;
    int max = -1000000;
    int i_bord_down, i_bord_up, j_bord_down, j_bord_up = 0;

    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if (arr[i][j] < min) {
                i_bord_down = i;
                j_bord_down = j;
                min = arr[i][j];
            }
            else if (arr[i][j] >= max) {
                i_bord_up = i;
                j_bord_up = j;
                max = arr[i][j];
            }
        }
    }

    int sum = 0;
    for(int i = i_bord_down; i <= i_bord_up; i++) {
        for(int j = j_bord_down; j <= j_bord_up; j++) {
            sum += arr[i][j];
        }
    }
    printf("%d", sum);
}