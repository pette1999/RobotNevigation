#include <iostream>
#include "file.h"

using namespace std;

class Method
{
public:
    Method();
    ~Method();

    void move();
    double getEuclideanDistance(int init_x, int init_y, int final_x, int final_y);
    double getManhattanDistance(int init_x, int init_y, int final_x, int final_y);
};