/*
int arr[10] = {0} - all numbers are 0s
1577 % 10 = 7
1577 / 10 = 157

*/




#include <stdio.h>

double volume(double r, double h);
double sideSquare(double r, double h);
void time(int minutes);
double weight(double pound);
double distance(double verst);
double amperage(double u, double r);
double cost(double g, double price);
double resistance(double r1, double r2);
double square(double a, double b);
double applescost(double g, double price);
double travelcost(double distance, double fuel, double price);
double pvolume(double a, double b, double c);

int main() {
    int a = 3.4;
    int b = 3.7;
    char name[15];
    int mins = 200;
    double pounds = 4;
    double versts = 6;
    printf("Введите имя: ");
    scanf("%s", &name);
    printf("%s\n",name);

    double res = volume(a,b);
    double res2 = sideSquare(a,b);
    time(mins);
    double res4 = weight(pounds);
    double res5 = distance(versts);
    printf("%lf\n%lf\n%lf\n%lf\n", res,res2,res4,res5);
    return 0;
}
//1
double volume(double r, double h) {
    return 3.14 * r * r * h;
}
//2
double sideSquare(double r, double h) {
    return 2 * 3.14 * h + 2 * 3.14 * r * r;
}
//3
void time(int minutes) {
    double hours = 0;
    hours = minutes/60;
    minutes = minutes%60;
    printf("%lf hours and %d minutes\n", hours, minutes);
}
//4
double weight(double pound) {
    return pound * 405.9;
}
//5
double distance(double verst) {
    return verst * 1066.8;
}
//6
double amperage(double u, double r) {
    return u/r;
}
//7
double cost(double g, double price) {
    return g * price;
}
//8
double resistance(double r1, double r2) {
    return (r1 * r2)/(r1 + r2);
}
//9
double square(double a, double b) {
    return a * b;
}
//10
double applescost(double g, double price) {
    return g * price;
}
//11
double travelcost(double distance, double fuel, double price) {
    return (distance * 2) * (fuel / 100) * price;
  //return (distance * 2)/fuel * price
}
//12
double pvolume(double a, double b, double c) {
    return a * b * c;
}