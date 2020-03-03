#include <iostream>
#include "Grid.h"

using namespace std;

int main(int argc, char** argv)
{
    file a("test.txt");
    a.getFile();

    int row = a.getFileRow();
    int column = a.getFileColumn();

    Grid g(row, column);
    g.printGrid("test.txt");
}