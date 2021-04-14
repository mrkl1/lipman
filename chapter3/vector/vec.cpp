//
// Created by us on 14.04.2021.
//

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using std::cout;
//using std::vector;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0; // доход

    void print(){
        cout<<bookNo+" "<<units_sold<<" "<<revenue;
    }
};

int main(){

    /*
     * тут важно понимать что вектор это шаблон а не класс
     * вектор может содержать как примитивные типы, так и
     * структуры, может даже содержать другие контейнеры,
     * сам себя
     * у вектора много способов инициализации, при необходимости
     * можно найти тут не буду особо описывать
     * можно задавать начальные списки, размер, емкость
     * создавать определенное число одинаковых элементов и тд
     */
    std::vector<int> ivec;
    std::vector<int> ivec2(10,-1);
    std::vector<std::string> strvec;
    std::vector<std::string> strvec2{10,"hi"};
    std::vector<Sales_data> svec;
    std::vector<std::vector<std::string>> ssvec;

    ivec.push_back(1);
    ivec.push_back(2);
    strvec.push_back("str");
    strvec.push_back("str2");

    ssvec.push_back(strvec);
    strvec.push_back("str3");
    strvec.push_back("str4");
    ssvec.push_back(strvec);

    //https://stackoverflow.com/questions/9751932/displaying-contents-of-a-vector-container-in-c/9751968
    for (auto s: ssvec){
        std::copy(s.begin(), s.end(),
                  std::ostream_iterator<std::string>(std::cout, " "));
        cout<<"\n";
    }

    std::copy(ivec.begin(),ivec.end(),
              std::ostream_iterator<int>(std::cout," "));
    cout<<"\n";

    std::copy(ivec2.begin(),ivec2.end(),
              std::ostream_iterator<int>(std::cout," "));
    cout<<"\n";

    Sales_data si1,si2;

    si1.revenue = 20;
    si1.bookNo = "1";
    si1.units_sold =4;

    si2.revenue = 220;
    si2.bookNo = "2";
    si2.units_sold =10;

    svec.push_back(si1);
    svec.push_back(si2);

    for(auto sv: svec){
        sv.print();
        cout<<"\n";
    }

    return 0;
}