#pragma once

#include <list>
#include <string>

namespace nlab {

class TextFileRW
{
public:
    TextFileRW(const std::string& file);

    void read(std::list<std::string>& lines);
    void write(const std::list<std::string>& lines);

    static void read(const std::string& file, std::list<std::string>& lines);
    static void write(const std::string& file, const std::list<std::string>& lines);

private:
    std::string m_file;
};

} // namespace nlab
