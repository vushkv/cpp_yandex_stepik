// В небоскребе n этажей. Известно, что если уронить стеклянный шарик с этажа номер p, и шарик разобьется,
// то если уронить шарик с этажа номер p+1, то он тоже разобьется. Также известно, что при броске с последнего
// этажа шарик всегда разбивается.Вы хотите определить минимальный номер этажа, при падении с которого шарик
// разбивается. Для проведения экспериментов у вас есть два шарика. Вы можете разбить их все, но в результате вы
// должны абсолютно точно определить этот номер.
// Определите, какого числа бросков достаточно, чтобы заведомо решить эту задачу.
#include <iostream>

int MinNumberOfTry(int floor) {
    if (floor < 3) {
        return 1;
    } else {
        return MinNumberOfTry(floor - MinNumberOfTry(floor - 1)) + 1;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << MinNumberOfTry(n);
    return 0;
}