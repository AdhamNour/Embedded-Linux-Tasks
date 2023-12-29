#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    for (size_t i = 1; i < 13; i++)
    {
        std::cout << i << std::endl;
        for (size_t j = 1; j < 13; j++)
        {
            cout<<i<<'*'<<j<<'='<<i*j<<endl;
        }
    }
    return 0;
}