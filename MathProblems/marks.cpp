#include <iostream>
#include <iomanip>

int main()
{
    int phy, chem, bio, math, comp;
    double per;

    std::cout << "Enter five subjects marks: ";
    if (!(std::cin >> phy >> chem >> bio >> math >> comp))
        return 1;

    per = (phy + chem + bio + math + comp) / 5.0;

    std::cout << "Percentage = " << std::fixed << std::setprecision(2) << per << '\n';

    if (per >= 90)
        std::cout << "Grade A";
    else if (per >= 80)
        std::cout << "Grade B";
    else if (per >= 70)
        std::cout << "Grade C";
    else if (per >= 60)
        std::cout << "Grade D";
    else if (per >= 40)
        std::cout << "Grade E";
    else
        std::cout << "Grade F";

    std::cout << '\n';

    return 0;
}