#include <iostream>

using namespace std;

int Prime(int a){ // Анхны тоо мөн эсэхийг шалгадаг int төрлийн утга буцаах хэрэглэгчийн функцийг тодорхойлно.
    int b=a/2; 
    // Анхны тоо мөн эсэхийг шалгахын тулд 2 - оос уг тооны тал хүртэл 1 - ээр нэмэгдүүлэн
    // давтаж, уг нэмэгдэж буй тоог шалгагдаж буй тоонд хуваахад үлдэгдэлгүй байвал шалгагдаж
    // буй тоо нь анхны тоо мөн болно. Шалгагдаж буй тооны тал хүртэл явуулдаг нь, давталтын үйлдэл
    // хэмнэх цаашлаад санах ой болон гүйцэтгэлийн хугацаанд эерэг нөлөөтэй.
    for(int i=2;i<b;i++){ // 0 - ээс шалгагдаж буй тооны тал хүртэл 1 - ээр нэмэгдүүлэн давтана.
        if(a%i==0) return 0; // Хэрэв i хувьсагчид хадгалагдаж буй утга нь шалгагдаж буй тоонд хуваахад
                             // үлдэгдэлгүй байвал уг тоо анхны тоо биш гэж үзэн 0 утгыг буцаана.
    }
    return 1; // Хэрэв эсрэг тохиолдол, үлдэгтэй хуваагдана хэмээн уг тоог анхны тоо мөн гэж үзэн 1 утгыг буцаана.
}

int main(){
    int a; // Гараас утга авч хадгалах а хувьсагчийг зарлана.
    cout << "toog oruulahad anhnii too esehiig shalgana, toog oruul: ";
    cin >> a; // Гараас а хувьсагчид утга авч хадгална.
    if(Prime(a)==1){ // Анхны тоо мөн эсэхийг шалгах функцээр а аргументийг дамжуулан буцаж ирсэн утга нь 1 эсэхийг шалгана.
        cout << "true" << endl; // Хэрэв буцаж ирсэн утга нь 1 - тэй тэнцүү байвал "МӨН" гэж хэвлэнэ.
    } else cout << "false" << endl; // Хэрэв буцаж ирсэн утга нь 1 - тэй тэнцүү бус байвал "БИШ" гэж хэвлэнэ.
}