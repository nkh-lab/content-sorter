#include "ProgArgManager.h"
#include "TextFileRW.h"

#include <boost/filesystem.hpp>
#include <iostream>

int main(int argc, char* argv[])
{
    nlab::Option<std::string> file{"file,f", "file to sort"};

    if (nlab::ProgArgManager(argc, argv, "1.0.0").parse(file))
    {
        if (boost::filesystem::exists(file.value))
        {
            nlab::TextFileRW file_rw(file.value);

            std::list<std::string> lines;
            file_rw.read(lines);
            std::cout << "Not sorted size: " << lines.size() << " lines\n";
            lines.sort();
            lines.unique();
            std::cout << "Sorted size: " << lines.size() << " lines\n";

            boost::filesystem::remove(file.value);
            file_rw.write(lines);
        }
        else
        {
            std::cout << "file doesn't exist: " << file.value << "\n";
        }
    }

    return 1;
}
