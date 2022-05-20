/*
Создайте класс Passport (паспорт), который будет содержать
паспортную информацию о гражданине Украины.
С помощью механизма наследования, реализуйте класс
ForeignPassport (загран.паспорт) производный от Passport.
Напомним, что заграничный паспорт содержит помимо па-
спортных данных, также данные о визах, номер заграничного па-
спорта.
*/

#include <iostream>


using namespace std;


class Passport {
    string name;
    string number;
    string seriy;
public:
    void setName(string name) {
        this->name = name;
    }
    void setNumber(string number) {
        this->number = number;
    }
    void setSeriy(string seriy) {
        this->seriy = seriy;
    }
    string getName() {
        return name;
    }
    string getNumder() {
        return number;
    }
    string getSeriy() {
        return seriy;
    }
    void print() {
        cout << this->getName() << endl;
        cout << this->getNumder() << endl;
        cout << this->getSeriy() << endl;
    }
};

class ForeignPassport : public Passport {
    string viza;
    string numberZagran;
public:
    ForeignPassport(string name, string number, string seriy) {
        this->setName(name);
        this->setNumber(number);
        this->setSeriy(seriy);
    };
    void setViza(string viza) {
        this->viza = viza;
    }
    void setnumberZagran(string numberZagran) {
        this->numberZagran = numberZagran;
    }
    string getViza() {
        return this->viza;
    }
    string getnumberZagran() {
        return this->numberZagran;
    }
    void print() {
        Passport::print();
        cout << this->getViza() << endl;
        cout << this->getnumberZagran() << endl;
    }
};

int main(){
    setlocale(LC_ALL, "RUS");
 
    ForeignPassport passport("Ильдар", "121313", "9080");
    passport.setnumberZagran("123213123");
    passport.setViza("Paris");
    passport.print();
}
