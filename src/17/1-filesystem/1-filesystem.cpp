#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
    fs::path dir_path = "/home/bruno";

    for (const auto& entry : fs::directory_iterator(dir_path))
    {
        std::cout << entry.path() << std::endl;
    }

    return 0;
}
