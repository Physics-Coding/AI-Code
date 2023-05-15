//
// Created by 86151 on 2023/5/12.
//

#ifndef EX09_CALCULATOR_H
#define EX09_CALCULATOR_H

#include <iostream>
#include <sstream>
using namespace std;

class BaseCalculator {
protected:
//这里面需要一个容器(数组),来存储运算之后的结果
    double arr[100];
    int k;
public:

    BaseCalculator(){
        k=0;
    };
    ostringstream oss;
    virtual void calculate(double, double){}
    friend ostream &operator<<(ostream &, const BaseCalculator*);
};

// 加法计算器类
class AddCalculator : public BaseCalculator {
private:
    void calculate(double, double);
};

// 减法计算器类
class SubCalculator : public BaseCalculator {
private:
    void calculate(double, double);
};



#endif //EX09_CALCULATOR_H
