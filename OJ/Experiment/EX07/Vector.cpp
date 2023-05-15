//
// Created by 86151 on 2023/5/13.
//

// Vector.cpp
#include "Vector.h"

Vector::Vector() {
    arr_=nullptr;
    sz_=0;
    cap_=0;
}

Vector::Vector(size_t count, int value) {
    arr_=new int[count];
    cap_=count;
    for(int i=0;i<count;i++){
        arr_[i]=value;
    }
}

Vector::Vector(const Vector &v) {
    arr_=new int[v.cap_];
    for(int i=0;i<v.sz_;i++){
         arr_[i]=v.arr_[i];
    }
    sz_=v.sz_;
    cap_=v.cap_;
}

Vector::~Vector() {
    if(cap_<=0){
        arr_=nullptr;
        cap_=0;
        sz_=0;
    }
    else{
        delete[] arr_;
        arr_=nullptr;
        cap_=0;
        sz_=0;
    }
}

Vector &Vector::operator=(const Vector &v) {
    if(this==&v){return *this;}
    if()
    arr_=new int[v.cap_];
    for(int i=0;i<v.sz_;i++){
        arr_[i]=v.arr_[i];
    }
    sz_=v.sz_;
    cap_=v.cap_;
}

int &Vector::operator[](size_t n) {}

size_t Vector::size() const {}

size_t Vector::capacity() const {}

void Vector::push_back(const int &a) {}

void Vector::pop_back() {}
