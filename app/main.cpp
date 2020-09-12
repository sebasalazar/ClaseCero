#include <iostream>

int main(int argc, char **argv)
{

    std::cout << std::endl;
    for (int i = 0; i < argc; i++)
    {
        std::cout << "El argumento " << i << " es " << argv[i] << std::endl;
    }
    std::cout << std::endl;

    return 0;
}