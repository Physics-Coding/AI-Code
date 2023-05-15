// String.cpp
#include "String.h"

void String::print()
{
    //空字符串不能直接cout
    if(len==0){
        cout<<'\n';
    }
    else{
        cout<<str_p<<'\n';
    }

    return;
}

String::String()
{
    len=0;
    str_p=nullptr;
}

String::String(const char *s)
{
        str_p=new char[strlen(s)+1];
        strcpy(str_p,s);
        len=strlen(s);
}

String::String(const String &s)
{
    if(s.len<=0){
        str_p= nullptr;
        len=0;
    }
    else{
            str_p=new char[strlen(s.str_p)+1];
            strcpy(str_p,s.str_p);
            len=s.len;
        }
}


String::~String()
{
    if(len<=0){
        return;
    }
    else{
        delete str_p;
        str_p=nullptr;
        len=0;
    }
}

String& String::operator=(const char *s)
{
    if(this->len<=0){
        this->str_p=new char[strlen(s)+1];
        strcpy(this->str_p,s);
        len=strlen(s);
        return *this;
    }
    else{
        delete this;
        this->str_p=new char[strlen(s)+1];
        strcpy(this->str_p,s);
        len=strlen(s);
        return *this;
    }
}

String& String::operator=(const String &s)
{
    if(&s==this){return *this;}
    if(s.len<=0){
        str_p= nullptr;
        len=0;
        return *this;
    }
    else{
            str_p=new char[strlen(s.str_p)+1];
            strcpy(str_p,s.str_p);
            len=s.len;
            return *this;
        }
}

char& String::operator[](int index)
{
    return str_p[index];
}

String String::operator+(const String &s)
{
    //空字符串不能用strlen
    //空字符串不能用strcpy
    String res;

    if(str_p!=nullptr&&s.str_p!=nullptr){
        res.str_p=new char[len+s.len+1];
        strcpy(res.str_p,str_p);
        strcat(res.str_p,s.str_p);
        res.len=len+s.len;
        return res;
    }
    else if(str_p==nullptr&&s.str_p==nullptr){
        return res;
    }
    else if(str_p==nullptr){
        res.str_p=new char[s.len+1];
        strcpy(res.str_p,s.str_p);
        res.len=len+s.len;
        return res;
    }
    else{
        res.str_p=new char[len+1];
        strcpy(res.str_p,str_p);
        res.len=len+s.len;
        return res;
    }
}

bool String::operator==(const String &s)
{
    if(len>s.len||len<s.len){
        return false;
    }
    else{
        for(int i=0;i<len;i++){
            if(str_p[i]!=s.str_p[i]){
                return false;
            }
        }
        return true;
    }
}

bool String::operator!=(const String &s)
{
    return !(*this==s);
}

bool String::operator<(const String &s)
{
    if(len<s.len){
        return true;
    }
    else if(len==s.len){
        int sum1=0,sum2=0;
        for(int i=0;i<len;i++){
            sum1+=(int)str_p[i];
            sum2+=(int)s.str_p[i];
        }
        if(sum1<sum2){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
