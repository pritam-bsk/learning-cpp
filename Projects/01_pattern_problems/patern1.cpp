// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include <iostream>
void patern1(){
    int n{};
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "* ";
        }
        std::cout<<std::endl;
    }

}