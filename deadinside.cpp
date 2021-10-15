#include <iostream>
#ifdef _WIN32
#include <windows.h> // Виндовс
#else 
#include <unistd.h> // Линукс
#endif
#include <clocale>

int main()
{
    setlocale(LC_ALL, "Russian");
    int i = 1000;
    int ded = 0;
    std::cout << "У меня нет проблем" << std::endl;
    std::cout << "Кроме моей башки" << std::endl;
    std::cout << "Прости, я умер" << std::endl;
    while (i > 8)
    {
        ded = i - 7;
        std::cout << i << " - 7 = " << ded << std::endl;
        i -= 7;
#ifdef _WIN32
        Sleep(1);
#else
        sleep(1);
#endif
    }
    std::cout << "Теперь вы дединсайдик" << std::endl;
    return 0;
}
