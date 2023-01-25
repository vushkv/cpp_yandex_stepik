// Вводится один символ, измените его регистр. То есть, если была введена строчная буква -
// сделайте ее заглавной и наоборот. Символы, не являющиеся латинской буквой, нужно выводить без изменений.
#include <iostream>

int main() {
    char symbol_case;
    std::cin >> symbol_case;
    std::cout << (symbol_case == char(toupper(symbol_case)) ? char(tolower(symbol_case)) : char(toupper(symbol_case)));
    return 0;
}