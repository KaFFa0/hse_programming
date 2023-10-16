#include <stdio.h>

int vis(int year);
void calend(int year);
int count(int lim);
int count2(int lim);
int summ(int num);
void nums(int num);
double pi(int acc);

int main() {
    int y;
    printf("%s","год для №1 ");
    scanf("%d",&y);
    int year;
    printf("%s","год для №2 ");
    scanf("%d", &year);
    calend(year);
    printf("%d\n",count(999));
    printf("%d\n",count2(999));
    int num;
    printf("%s","число для №5 ");
    scanf("%d", &num);
    printf("%d\n", summ(num));
    nums(560);
    printf("%lf\n", pi(10000));
}

int vis(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void calend(int year) {
    int start = 1984;
    int subc = (year-start) / 12; 
    int nyear = (year-start) % 12;
    switch (subc) {
        case 0:
        printf("%s", "year of Green ");
        break;

        case 1:
        printf("%s", "year of Red ");
        break;

        case 2:
        printf("%s", "year of Yellow ");
        break;

        case 3:
        printf("%s", "year of White ");
        break;

        case 4:
        printf("%s", "year of Black ");
        break;

    }

    switch (nyear) {
        case 0:
        printf("%s", "Rat\n");
        break;

        case 1:
        printf("%s", "Cow\n");
        break;

        case 2:
        printf("%s", "Tiger\n");
        break;

        case 3:
        printf("%s", "Rabbit\n");
        break;

        case 4:
        printf("%s", "Dragon\n");
        break;

        case 5:
        printf("%s", "Snake\n");
        break;

        case 6:
        printf("%s", "Horse\n");
        break;

        case 7:
        printf("%s", "Sheep\n");
        break;

        case 8:
        printf("%s", "Monkey\n");
        break;

        case 9:
        printf("%s", "Chicken\n");
        break;

        case 10:
        printf("%s", "Dog\n");
        break;

        case 11:
        printf("%s", "Pig\n");

    }
    

}

int count(int lim) {
    int cnt = 0;
    for (int i = 1; i < lim; i++) {
        if (i == 7) {
            cnt++;
        }
    }
    return cnt;
}

int count2(int lim) {
    int cnt = 1;
    int start = 7;
    for (int i = 1; i < lim; i++) {
        if (i - start == 10) {
            cnt++;
            start = i;
        }
    }
    return cnt;
}

int summ(int num) {
    int sum = 0;
    while (num != 0) {

        sum += num % 10;
        num /= 10;
        if (num == 0 && sum / 10 != 0) {
            num = sum;
            sum = 0;
        }
    }
    return sum;
}

void nums(int num) {
    int atts = 10;
    int choice;
    while (atts > 0) {
        printf("Введите число: ");
        scanf("%d", &choice);
        if (choice == num) {
            printf("%s", "Congrats\n");
            break;
        }
        else if (choice > num) {
            printf("%s","Too high!\n");
            atts--;
        }
        else {
            printf("%s","Too low!\n");
            atts--;
        }
    }
    if (choice != num) {
        printf("%s", "Unlucky\n");
    }
}


double pi(int acc) {
    int iter = 1;
    double s = 1;
    for (int i = 3; i < acc; i+=2) {
        if (iter % 2 == 0) {
            s += (double)1/i;
        }
        else {
            s -= (double)1/i;
        }
        iter++;
    }
    return s*4;
}
