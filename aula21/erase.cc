#include <vector>
#include <iostream>
 
 
int main( )
{
    std::vector<int> c;

    for (int i = 0 ; i < 10 ; i ++)
        c.push_back(i);

    for (int i = 0 ; i < c.size() ; i ++)
        std::cout << c[i] << " ";
    std::cout << '\n';

//    for (auto &i : c) {
//        std::cout << i << " ";
//    }
//    std::cout << '\n';
 
    c.erase(c.begin());

    for (int i = 0 ; i < c.size() ; i ++)
        std::cout << c[i] << " ";
    std::cout << '\n';
 
//    for (auto &i : c) {
//        std::cout << i << " ";
//    }
//    std::cout << '\n';
 
    c.erase(c.begin()+2, c.begin()+5);
 
    for (int i = 0 ; i < c.size() ; i ++)
        std::cout << c[i] << " ";
    std::cout << '\n';
//    for (auto &i : c) {
//        std::cout << i << " ";
//    }
//    std::cout << '\n';
}
