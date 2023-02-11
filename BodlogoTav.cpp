#include <iostream>

using namespace std;

int main(){
    int a,b,sum=0,multi=1; // int утга хадгалах хувьсагч нарыг зарлаж өгнө.
    // sum хувьсагчид нийлбэр хадгалах тул анхны утга нь 0 байх,
    // multi хувьсагчид үржвэрийг хадгалах тул анхны утга нь 1 байх нь тус тус тохиромжтой.
    cout << "Garaas heden oruulsan toonii niilber bolon urjver oloh" << endl;
    cout << "Niit heden too oruulah ve: ";
    cin >> a; // Гараас N тоог аван а хувьсагчид хадгална.
    cout << "Toog oruulna uu: ";
    for(int i=0;i<a;i++){ // 0 - ээс N тоо хүртэл нэгээр нэмэгдүүлэн давтах давталт тодорхойлно.
        cin >> b; // Давталт бүр дээр гараас утга b хувьсагчид авна.
        sum+=b; // Гараас орж ирсэн утгуудыг sum хувьсагчид нэмнэ.
        multi*=b; // Гараас орж ирсэн утгуудыг multi хувьсчаар үржүүлнэ. 
    }
    cout << "Niilber: " << sum << endl; // Нийлбэр буюу sum хувьсагчид хадгалагдсан утгыг хэвлэнэ.
    cout << "Urjver: " << multi; // Үржвэр буюу multi хувьсагчид хадгалагдсан утгыг хэвлэнэ.
}