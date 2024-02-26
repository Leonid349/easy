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
