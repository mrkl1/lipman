//
// Created by us on 07.04.2021.
//

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

struct Person{

};

void string_operation(){
    cout << "Enter your name(char): ";
    char name[500];
    cin.getline(name, 500);
    cout<<name<<"\n";

    cout << "Enter your name(string): ";
    string name_s;
            //аргументы поток ввода и переменная
    getline(cin, name_s);
    cout<<name<<"\n";

    cout << "eternal/infinite loop for input(\"e\"-exit): ";
    string word;
    while (cin>>word){
        if (word == "e"){
            break;
        }
        cout<<word<<"\n";
    }

    string emptyS;
    if (emptyS.empty()){
        cout<<"emptyS is empty()\n";
    }
    string s = "zx"+ emptyS+"c";
    emptyS = "emptyS is empty()";
    cout<<"now size of emptyS = "<<emptyS.size()<<"\n";
    cout<<"type of string.size() = "<<typeid(emptyS.size()).name() <<"\n";
    return;
}

void symbolsFunc(){
    //
    cout << std::boolalpha <<"isalnum('1') "<< (bool)isalnum('1')<<"\n";
    cout << std::boolalpha << (bool)isalnum(1)<<"\n";
    cout << std::boolalpha << (bool)isalpha(75)<<"\n";
    cout << std::boolalpha <<"(bool)iscntrl(220) "<< (bool)iscntrl(220)<<"\n";
    cout << std::boolalpha << (bool)isdigit(1)<<"\n";
    cout << std::boolalpha << (bool)islower('w')<<"\n";

    //for range
    string str = "example string";
    for (auto c: str ){
        cout<<c<<"\n";
    }

    string str2 = "example string";
    for (auto &c: str2 ){
        c = toupper(c);
    }
    cout<<str2<<"\n";
    //чтобы правильно итериророваться по строке
    //желательно тип объявлять так
    //т.к. там свой тип используется
    //string::size_type;
    decltype(str2.size()) index =0;
    cout<<typeid(index).name()<<"\n";

    const string hexd = "0123456789ABCDEF";
    string result;
    string::size_type n;
    while (cin>>n){

        if (n < hexd.size()){
            result+=hexd[n];
        }

    }
    cout<<result<<"\n";
    //139
    const string s = "keep out!";
    for(auto &c : s){
        //тип переменной будет char
        cout<<typeid(c).name()<<endl;
    }
}

int main(){
//    string_operation();
    symbolsFunc();
}