#include <iostream>
#include <vector>

void left(std::vector<int>& array) {
    for (int j = 1; j < 4; j++) {
            if (array[j-1] == 0 and array[j] != 0) {
                array[j-1] = array[j];
                array[j] = 0;
            }
        }
    for (int j = 1; j < 4; j++) {
        if (array[j-1] == 0 and array[j] != 0) {
            array[j-1] = array[j];
            array[j] = 0;
        }
    }
}
void left_add (std::vector<int>& array) {
    for (int i = 1; i < 4; i++) {
        if (array[i-1]==array[i] and array[i] != 0) {
            array[i-1] = array[i-1]*2;
            array[i] = 0;
            i++;
        }
    }
}

void right(std::vector<int>& array) {
    for (int j = 3; j >0; j--) {
        if (array[j-1] != 0 and array[j] == 0) {
            array[j] = array[j-1];
            array[j-1] = 0;
        }
    }
    for (int j = 3; j >0; j--) {
        if (array[j-1] != 0 and array[j] == 0) {
            array[j] = array[j-1];
            array[j-1] = 0;
        }
    }
}
void right_add (std::vector<int>& array) {
    for (int i = 3; i > 0; i--) {
        if (array[i]==array[i-1] && array[i] != 0) {
            array[i] = array[i]*2;
            array[i-1] = 0;
        }
    }
}
void up(std::vector<int>& array, std::vector<int>& array2, std::vector<int>& array3, std::vector<int>& array4) {
    for (int j = 0; j < 4; j++) {
        if (array[j] == 0 and array2[j] != 0) {
            array[j] = array2[j];
            array2[j] = 0;
        }
        if (array3[j] > 0 and array2[j] == 0) {
            array2[j] = array3[j];
            array3[j] = 0;
        }
        if (array4[j] > 0 and array2[j] == 0 and array3[j] == 0) {
            array2[j] = array4[j];
            array4[j] = 0;
        }else if (array4[j] > 0 and array3[j] == 0) {
            array3[j] = array4[j];
            array4[j] = 0;
        }
    }
    for (int i = 0; i <4; i++) {
        if (array[i]==array2[i] && array[i] != 0) {
            array[i] = array[i]*2;
            array2[i] = 0;
        }
        if (array3[i]==array2[i] and array2[i] != 0) {
            array2[i] = array2[i]*2;
            array3[i] = 0;
        }
        if (array4[i]==array3[i] and array3[i] != 0) {
            array4[i] = array3[i]*2;
            array3[i] = 0;
        }
    }
    for (int j = 0; j < 4; j++) {
        if (array[j] == 0 and array2[j] != 0) {
            array[j] = array2[j];
            array2[j] = 0;
        }
        if (array3[j] > 0 and array2[j] == 0) {
            array2[j] = array3[j];
            array3[j] = 0;
        }
        if (array4[j] > 0 and array2[j] == 0 and array3[j] == 0) {
            array2[j] = array4[j];
            array4[j] = 0;
        }else if (array4[j] > 0 and array3[j] == 0) {
            array3[j] = array4[j];
            array4[j] = 0;
        }
    }
}

void down(std::vector<int>& array, std::vector<int>& array2, std::vector<int>& array3, std::vector<int>& array4) {
    for (int i = 0; i <4; i++) {
        if (array4[i] == 0 and array3[i] != 0) {
            array4[i] = array3[i];
            array3[i] = 0;
        }
        if (array2[i] > 0 and array3[i] == 0) {
            array3[i] = array2[i];
            array2[i] = 0;
        }
        if (array2[i] == 0 and array[i] != 0) {
            array2[i] = array[i];
            array[i] = 0;
        }
    }
    for (int i = 0; i <4; i++) {
        if (array4[i] == 0 and array3[i] != 0) {
            array4[i] = array3[i];
            array3[i] = 0;
        }
        if (array2[i] > 0 and array3[i] == 0) {
            array3[i] = array2[i];
            array2[i] = 0;
        }
        if (array2[i] == 0 and array[i] != 0) {
            array2[i] = array[i];
            array[i] = 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (array4[i]==array3[i] and array3[i] != 0) {
            array4[i] = array3[i]*2;
            array3[i] = 0;
        }
        if (array3[i]==array2[i] and array2[i] != 0) {
            array2[i] = array2[i]*2;
            array3[i] = 0;
        }
        if (array[i]==array2[i] and array[i] != 0) {
            array[i] = array2[i]*2;
            array2[i] = 0;
        }
    }
    for (int i = 0; i <4; i++) {
        if (array4[i] == 0 and array3[i] != 0) {
            array4[i] = array3[i];
            array3[i] = 0;
        }
        if (array2[i] > 0 and array3[i] == 0) {
            array3[i] = array2[i];
            array2[i] = 0;
        }
        if (array2[i] == 0 and array[i] != 0) {
            array2[i] = array[i];
            array[i] = 0;
        }
        if (array4[i] == 0 and array3[i] != 0) {
            array4[i] = array3[i];
            array3[i] = 0;
        }
        if (array2[i] > 0 and array3[i] == 0) {
            array3[i] = array2[i];
            array2[i] = 0;
        }
        if (array2[i] == 0 and array[i] != 0) {
            array2[i] = array[i];
            array[i] = 0;
        }
    }
    }

int main() {

    int commando;

    std::vector <int> one(4);
    std::vector <int> two(4);
    std::vector <int> three(4);
    std::vector <int> four(4);
    std::cin >> one[0] >> one[1] >> one[2] >> one[3];
    std::cin >> two[0] >> two[1] >> two[2] >> two[3];
    std::cin >> three[0] >> three[1] >> three[2] >> three[3];
    std::cin >> four[0] >> four[1] >> four[2] >> four[3];

        std::cin >> commando;
        if (commando == 0) {
                left(one);
                left(two);
                left(three);
                left(four);
            left_add(one);
            left_add(two);
            left_add(three);
            left_add(four);
            left(one);
            left(two);
            left(three);
            left(four);
        }
        if (commando == 2) {
            right(one);
            right(two);
            right(three);
            right(four);
            right_add(one);
            right_add(two);
            right_add(three);
            right_add(four);
            right(one);
            right(two);
            right(three);
            right(four);
        }
        if (commando == 1) {
            up(one, two, three, four);
        }
            if (commando == 3) {
            down(one, two, three, four);
        }
        for (int i = 0; i < one.size(); i++) {
            std::cout << one[i]<< " ";
        }
        std::cout << std::endl;
        for (int i = 0; i < two.size(); i++) {
            std::cout << two[i] << " ";
        }
        std::cout << std::endl;
        for (int i = 0; i < three.size(); i++) {
            std::cout << three[i] << " ";
        }
        std::cout << std::endl;
        for (int i = 0; i < four.size(); i++) {
            std::cout << four[i] << " ";
        }
        return 0;
}