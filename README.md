Simple tool for sorting and removing duplicates lines in file. 

For example tool can be used for sorting includes file (`*.includes`) for QtCreator projects where such files might be filled with duplicated and messy pathes when you add several times the same folders.

## Dependencies
* [Boost::filesystem](https://github.com/boostorg/filesystem)
* [nkh-lab/prog-arg-manager](https://github.com/nkh-lab/prog-arg-manager)

## Project setup
1. Clone main git project:
```
$ git clone https://github.com/nkh-lab/content-sorter.git
```
2. Clone submodule projects:
```
$ cd content-sorter
$ git submodule update --init 
```

## How to build
```
$ mkdir build && cd build
$ cmake ..
$ make
```

## How to run
```
$ cd build/src
$ ./content-sorter my-qtcreator-project.includes
Not sorted size: 107 lines
Sorted size: 85 lines
```
