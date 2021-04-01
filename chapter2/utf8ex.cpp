//
// Created by us on 23.03.2021.
//

#include <iostream>
#include <string>
#include <codecvt>
#include <locale>

//L"text" - wchar_t
//u8"text" - utf8
//U"text" unicode16/32

//U unsigned
//L Long
//LL long long


int main(){
    std::cout<<u8"привет\n";
    std::cout<<typeid(42LL).name()<<" "<<42LL<<"\n";
}