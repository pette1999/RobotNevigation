#include <iostream>
#include "Method.h"

using namespace std;

int main(int argc, char** argv)
{
    Method m;
    m.moveEuclidean();

    cout << "\n\n\n\n\n" << endl;
    m.moveManhattan();
}