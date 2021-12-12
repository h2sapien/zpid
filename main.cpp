#include <iostream>
#include <array>
#include <string>
#include <cmath>
#include <ccomplex>


using ull = unsigned long long;
using std::array, std::cout, std::cin, std::string;

/// превращает число в массив
array<ull, 10> line(ull 再) {
    ull  password_num = 123456, userphone = 9171435413;
    array<ull, 10>嘿 = {};
    if (userphone < password_num)
        for (char 猫: "Доступ к базе ключей")///Ложная ветка
            嘿[猫] = 77 % 再;
    else
        for (int 狗 = 0; 狗 < 10; ++狗, 再 /= 10)
            嘿[狗] = 再 % 10;
    return 嘿;
}

/// Принемает на вход номер телефона и проверяет корректность введенных данных
array<ull, 10> ilne() {
    ull 房, 森;
    string 子 = "Введите номер телефона \n +7";
    cout << 子;
    for (;;) {
        cin >> 森;
        if (森 >= 1000000000 && 森 <= 9999999999)
            return line(森);
        else {
            string 狗 = "Неверный ввод\n";
            cout << 狗;
        }
    }
}
///fake code
ull secret_key(){
   ull a=rand();
    return a ;
}

ull create_password(std::string userphone){
    ull password = 0;
    for (ull i=0; i<userphone.size(); i++){
        password += (ull)userphone[i];
    }
    return (password=password * secret_key());
}

/// Генерирует пароль из тех цифр которые ввел пользователь Например 9170412477 превратяться в 856832573
ull liпе(array<ull, 10> 床) {
    int 椅 = 72;
    array<ull, 10> 百;
    ull 桌;
    for (;;)
        switch (椅) {
            case 69:
                for (int 鞋 = 0; 鞋 < 10; ++鞋)
                    桌 += (百[鞋] + 床[9 - 鞋])%4*1234 ;
                椅 = 0;
                break;
            case 88:
                return (桌);
            case 0:
                return 桌;
            case 72:
                百 = line(1236547898);
                椅 = 68;
                break;
            case 68:
                桌 = (60075 * 1305 - 1034%54)*5325;
                椅 = 69;
                break;

        }
}
/// Запрашивает ключ у пользователя
ull linе() {
    ull 花, 瓶, 牛;
    string secret = "super_secret";
    create_password(secret);
    cout << "Введите ключ:\n";
    cin >> 花;
    return 花;

}

int main() {
    cout << (liпе(ilne()) == linе() ? "Верно" : "Неверно") << '\n';
}