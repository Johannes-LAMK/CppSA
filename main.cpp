#include<iostream>

using namespace std;

class A {
   public : class B {
   public:
    string str;
   public:
    void setStr(string data){
        str = data;
    }
    void getStr(){
        cout << "The string is " << str;
    }
   };
};

int main() {
   A :: B object;
   object.setStr("stringi");
   object.getStr();
   return 0;
}
