// Переведите символ в верхний регистр.
#include <iostream>

// #include <string>
int main() {
    char lower_case_symbol;
    std::cin >> lower_case_symbol;
    std::cout << char(toupper(lower_case_symbol));
    return 0;
}