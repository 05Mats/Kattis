#include <iostream>

int main() {
    int number;
    int squares;
    int start;
    int temp;
    int magic;
    int jumps=0;
    int cycle[400];
    std::cin >>squares;
    if (1>squares or squares > 200) {
        std::cout<<"Wrong input"<<std::endl;
        return 0;
    }
    int game[squares];
    std::cin >>start;
    if (1>start or start > squares) {
        std::cout<<"Wrong input"<<std::endl;
        return 0;
    }
    std::cin >>magic;
    if ( magic >= -200 or magic <= 200)  {
        std::cout<<"Wrong input"<<std::endl;
        return 0;
    }
    for (int i = 0; i < squares; i++) {
        std::cin>>game[i];
        if (game[i] > 200 or game[i] < -200) {
            return 0;
        }
    }
    temp = game[start-1];
    number= start-1;
    while (1) {
        std::cout<<"number "<<number<<std::endl;
        std::cout<<"Game number  "<<game[number]<<std::endl;
        if (game[number]==magic) {
            std::cout<<"magic"<<std::endl;
            std::cout<<jumps;
            return 0;
        } else if (number<0) {
            std::cout<<"left"<<std::endl;
            std::cout<<jumps;
            return 0;
        } else if (number>=squares) {
            std::cout<<"right"<<std::endl;
            std::cout<<jumps;
            return 0;
        }
        for (int i = 0; i < jumps; i++) {
            if (number == cycle[i]) {
                std::cout<<"cycle"<<std::endl;
                std::cout<<jumps;
                return 0;
            }
        }
        cycle[jumps]=number;
        number=number+temp;
        temp=game[number];
        jumps++;
    }
}