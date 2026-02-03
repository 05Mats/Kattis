#include <iostream>

int main() {
    int price;
    int temp=149;
    int count=1;
    std::cin >> price;
    if (price>100 && price<149) {
        price=99;
        std::cout << price << std::endl;
        return 0;
    } else if (price == 10000) {
        price=9999;
        std::cout << price << std::endl;
        return 0;
    }
    while (price>temp) {
        temp=temp+100;
        count++;
    }
        if (temp == price) {
            price=count*100+99;
        } else {
            price=(count-1)*100+99;
        }
    std::cout << price << std::endl;
    return 0;
}