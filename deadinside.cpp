// дединсайдам привет, остальным соболезную
// by https://yuni.su

#include <iostream>
#include <unistd.h>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "Russian");
    int i = 1000;
    int ded;
    std::cout << "У меня нет проблем\n";
    std::cout << "Кроме моей башки\n";
    std::cout << "Прости, я умер\n";
    while (i > 8)
    {
      ded = i - 7;
      std::cout << i << " - 7 = " << ded << "\n";
      i -= 7;
      sleep(1);
    }
    std::cout << "Теперь вы дединсайдик";
    return 0;
}
