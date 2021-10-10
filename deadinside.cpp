// дединсайдам привет, остальным соболезную
// by https://yuni.su

#include <iostream>

int main()
{
    int i = 1000;
    int ded;
    while (i > 8)
    {
      ded = i - 7;
      std::cout << i << " - 7 = " << ded;
      i -= 7;
      sleep(5);
    }
    std::cout << "you deadinside xd";
    return 0;
}
