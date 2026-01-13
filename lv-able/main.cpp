#include <iostream>

int main() {
    int count;
    std:: string word;
    std ::cin>>count;
    if (count >= 1 and count <= 5*10^5) {
        std:: cin>> word;
        if (word.find("lv") != std::string::npos ) {
            std::cout <<0;
        } else if (word.find("l") != std::string::npos or word.find("v") != std::string::npos) {
            std::cout<<1;
        }
        else {
            std::cout<<2;
        }
    }
    return 0;
}