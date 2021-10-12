// дединсайдам привет, остальным соболезную
// by https://yuni.su

using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int i = 1000, i > 2; i-=3)
            {
                Console.WriteLine(i + " - 3 = " + (i - 3));
                System.Threading.Thread.Sleep(500);
            }
        }
    }
}