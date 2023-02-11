#include <iostream>
#define pi 3.14159265359 // define preprocessor ашиглан пи тоог тодорхойлно.

using namespace std;

double talbai(double a){ // талбай гэх хэрэглэгчийн функцийг бутархай тоо буцаахаар зарлан тодорхойлсон.
    return (double) a*a*pi; // талбайг нэг үйлдлээр олж буцаана.
}

int main(){
    double radious; // радиус гэсэн бутархай тоо хадгалах хувьсагчийг зарлаж өгнө.
    cout << "Talbai oloh" << endl;
    cout << "Garaas radiousiin utgiig oruulna uu: ";
    cin >> radious; // гараас радиус хувьсагчид утга оноон авна.
    cout << "Talbai: " << talbai(radious) <<endl; // талбай функц руу радиус аргументээр дамжуулан буцаж ирсэн утгыг хэвлэнэ.
}