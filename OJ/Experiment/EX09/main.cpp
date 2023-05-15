#include <iostream>
#include "Calculator.h"
#include <iomanip>
ostream & operator<<(ostream & out, const BaseCalculator* cal) {
    // write your code here.....
    for(int i=0;i<cal->k;i++){
        out<<fixed<<setprecision(2)<<cal->arr[i]<<'\n';
    }
    return out;
}

void AddCalculator::calculate(double a, double b) {
    arr[k++]=a+b;
}

void SubCalculator::calculate(double a, double b) {
    arr[k++]=a-b;
}




int main() {
    BaseCalculator* cal1 = new AddCalculator();
    BaseCalculator* cal2 = new SubCalculator();
    cal2->calculate(11.4, 51.4);
    cout << cal2;
    cal1->calculate(23.33, 15.51);
    cal1->calculate(3.14159, 2.71828);
    cout << cal1;
    cal2->calculate(834047409, 510756141);
    cout << cal2;
}
