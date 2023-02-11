#include <iostream>

using namespace std;

int SquareArea(int a, int b){ // Тэгш өнцөгтийн талбай гэсэн бүхэл тоо буцаах хэрэглэгчийн функц тодорхойлно.
    return a*b; // талбайг олон буцаана.
}

int main(){
    int a,b; // Тэгш өнцөгтийн 2 талын уртыг хадгалах бүхэл тоог хадгалах хувьсагчдыг тодорхойлно.
    cout << "Tegsh untsugtiin talbaig oloh" << endl;
    cout << "Garaas tegsh untsugtiin taluudiin hemjeeg oruulna uu (a,b): ";
    cin >> a >> b; // Гараас 2 талын уртыг буюу 2 хувьсагчид утгыг авч онооно.
    cout << "Tegsh untsugtiin talbai: " << SquareArea(a,b) << endl; 
    // Тэгш өнцөгтийн талбай функцээр 2 талын аргументийг дамжуулан буцаж ирсэн утгыг хэвлэнэ.
}