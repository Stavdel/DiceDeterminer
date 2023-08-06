#include <iostream>
#include <map>
#include <set>

int main()
{
    std::map<int, int> m;

    for (int i = 1; i <= 5; ++i)
    {
        std::cout << "Enter die roll: ";
        int value;
        std::cin >> value;
        ++m[value];
    }

if (m.size() == 1)
{
    std::cout << "YAHTZEE!!" << std::endl;
}

else if (m.size() == 2)
{
    int x = m.begin()->second;
    if ((x == 1) || (x ==4))
    {
        std::cout << "Four of a kind!" << std::endl;
    }
    else
    {
        std::cout << "Full House!!" << std::endl;
    }
}
else if (m.size() == 3)
{
    int total = 0;
    for (const std::pair<int, int>& die : m)
    {
        if (die.second > 1)
        {
            total += die.second;
        }
    }
    if (total == 3)
        std::cout << "Three of a kind!" << std::endl;
    else
        std::cout << "Two Pair" << std::endl;
}
else if (m.size() == 4)
{

}
else if (m.size () == 5)
{
    
}


    system ("PAUSE");
    return 0;
}