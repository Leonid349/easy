#include <iostream>
using namespace std;

void itc_name(){
    cout << "Leonid";
}
void itc_fio(){
    cout << endl;
    itc_name();
    cout <<  " Ovsyannikov Sergeevich";
}
int itc_abc(int num){
    num = num * -1;
    return num;

}
int itc_revnbr(int num){
    int fir, sec, thr;
    fir = num / 100;
    sec = num % 100 / 10;
    thr = num % 10;
    cout << thr << sec << fir;

}
bool itc_iseven(int num){
    if (num % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}
int itc_max(int num1, int num2){
    if (num1 >= num2){
        return num1;
    }
    else{
        return num2;
    }
}
int itc_min(int min1, int min2){
    if (min1 <= min2){
        return min1;
    }
    else{
        return min2;
    }
}
double itc_fmax(double num, double num2){
    if (num >= num2){
        return num;
    }
    else{
        return num2;
    }
}
double itc_fmin(double num, double num2){
    if (num <= num2){
        return num;
    }
    else{
        return num2;
    }
}
int itc_sqrt(int num){
    int x;
    x = 0;
    while (x*x != num){
        x++;
    }
    return x;
}
int itc_skv(int num){
    if (num > 0){
        return num * num;
    }
    else{
        return -1;
    }
}
int itc_spr(int a, int b){
    if (a > 0 && b > 0){
        return a * b;
    }
    else{
        return -1;
    }

}
