// В сети интернет каждому компьютеру присваивается четырехбайтовый код,
// который принято записывать в виде четырех чисел, каждое из которых может принимать значения от 0 до 255,
// разделенных точками. Вот примеры правильных IP-адресов:
// 127.0.0.0
// 192.168.0.1
// 255.0.255.255
// Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.
#include <iostream>

int main() {
    int first, second, third, fourth;

    std::string s;
    int n = scanf("%d.%d.%d.%d", &first, &second, &third, &fourth);
    std::cin >> s;
    std::cout << (n == 4 && s == "" && first >= 0 && first < 256 && second >= 0 && second < 256 && third >= 0 &&
                  third < 256 && fourth >= 0 && fourth < 256
                  ? "YES" : "NO");
    return 0;
}