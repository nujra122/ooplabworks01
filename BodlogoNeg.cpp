#include <iostream>

using namespace std;

int max(int a, int b, int c){ // мах гэсэн 3 бүхэл тоон аргументтэй хэрэглэгчийн функц зарлав
    if (a>=b && a>=c){        // а нь бусад 2 оосоо их байвал а тоог буцаана
        return a;             //
    } else if (b>=a && b>=c){ // хэрэв а нь их бус, в нь бусад 2 оос их гэвэл в тоог буцаана.
        return b;             //
    } else {                  //
        return c;             // а болон в хоёул их биш гээд с тоо хамгийн их нь болох тул буцаана.
    }
}

int main(){
    int a,b,c; // Гараас 3 тоо авч хадгалах тул бүхэл тоон төрлийн 3 хувьсагчийг бэлдэж зарлана.
    cout << "Garaas duriin 3 toog oruulah ba tuunees hamgiin ih toog olon hevlej haruulah." <<endl;
    cout << "Daraallan 3 toog oruulna uu: ";
    cin >> a >> b >> c; // Гараас 3 тоог дарааллан авч хувьсагч тус бүрт утгыг онооно.
    cout << "Tanii oruulsan 3 toonii hangiin ih ni " << max(a,b,c) << " baina." << endl;
    // 20 дугаар мөр: мах функцээр 3 утгыг дамжуулан буцаан ихийг буцаасанг хэвлэж харуулна.
    return 0;
}