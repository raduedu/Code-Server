#include <fstream>
#include <iostream>
#include <filesystem>
#include <cstring>
#include <cerrno>
int main() {
    std::cout << "cwd = " << std::filesystem::current_path() << "\n";
    std::filesystem::path p = std::filesystem::current_path() / "data" / "input.txt";
    std::cout << "trying: " << p << "\n";
    std::ifstream fin(p);
    if (!fin) { std::cout << "open failed: " << std::strerror(errno) << "\n"; return 1; }
    std::string s; std::getline(fin, s);
    std::cout << "OK, first line: " << s << "\n";
}
