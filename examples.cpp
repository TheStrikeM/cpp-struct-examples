//
// Created by thestrikem on 9/17/21.
//
#include <iostream>

struct BeautifulOutput {
    int item1;
    int item2;
    int result;

    std::string beautifulResult() {
        return std::to_string(item1) + " + " + std::to_string(item2) + " = " + std::to_string(result);
    }
};

struct Example {
    int a;
    int b;

    Example(int a = 1, int b = 1) : a(a), b(b)
    {}

    void printSum() {
        BeautifulOutput beautifulOutput = { this->a, this->b, this->a + this->b };
        std::cout << beautifulOutput.beautifulResult() << std::endl;
    }
};
