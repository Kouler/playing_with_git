#include <iostream>

int foo_to_be_checked() {
    std::cout << "Please, confirm my pull-request\n";
}

int main(int argc, char const *argv[])
{
    std::cout << "I don't give a damn, man, that's just a constant string :)" << std::endl;
    for (size_t i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }
    //
    

    return 0; 
}
