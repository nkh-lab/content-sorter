#include "TextFileRW.h"

#include <fstream>

namespace nlab {

TextFileRW::TextFileRW(const std::string& file)
    : m_file{file}
{
}

void TextFileRW::read(std::list<std::string>& lines)
{
    read(m_file, lines);
}

void TextFileRW::write(const std::list<std::string>& lines)
{
    write(m_file, lines);
}

void TextFileRW::read(const std::string& file, std::list<std::string>& lines)
{
    std::string line;
    std::ifstream input(file);
    while (std::getline(input, line))
    {
        lines.push_back(line);
    }
}

void TextFileRW::write(const std::string& file, const std::list<std::string>& lines)
{
    std::ofstream output(file);

    for (auto& l : lines)
    {
        output << l << "\n";
    }
}

} // namespace nlab
