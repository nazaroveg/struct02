// struct01.cpp :
// nazaroveg@yandex.ru

#include <iostream>
#include <string>
#include <Windows.h>
struct address
{
    std::string city;
    std::string street;
    unsigned int  House;
    unsigned int apartment;
    unsigned int index;

};

void print(address dd);

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);

    address add_1;
    add_1.city = "Москва";
    add_1.street = "проспект Мира";
    add_1.House = 188;
    add_1.apartment = 555;
    add_1.index = 100100;
    print(add_1);

    address add_2;
    add_2.city = "Клин";
    add_2.street = "Советская";
    add_2.House = 18;
    add_2.apartment = 5;
    add_2.index = 300650;
    print(add_2);



}
void print(address dd)
{
    std::cout 
         << "Город: " << dd.city << "\n"
         << "Улица: " << dd.street << "\n"
         << "Дом: " << dd.House << "\n"
         << "Квартира: " << dd.apartment << "\n"
         << "индекс: " << dd.index << "\n" << std::endl;
}

