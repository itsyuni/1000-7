// дединсайдам привет, остальным соболезную
// by https://yuni.su

#include <iostream>
#include <unistd.h>

int main()
{
    int i = 1000;
    int ded;
    std::cout << "У меня нет проблем";
    std::cout << "Кроме моей башки";
    std::cout << "Прости, я умер";
    while (i > 8)
    {
      ded = i - 7;
      std::cout << i << " - 7 = " << ded;
      i -= 7;
      sleep(5);
    }
    std::cout << "Теперь вы дединсайдик";
    return 0;
}
