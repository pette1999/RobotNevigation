#include <iostream>
#include <math.h>
#include "Method.h"

using namespace std;

Method::Method()
{

}

Method::~Method()
{

}

void Method::move()
{
    
}

double Method::getEuclideanDistance(int init_x, int init_y, int final_x, int final_y)
{
    return sqrt((init_x - final_x) * (init_x - final_x) + (init_y - final_y) * (init_y - final_y));
}

double Method::getManhattanDistance(int init_x, int init_y, int final_x, int final_y)
{
    return (abs(init_x - final_x) + abs(init_y - final_y));
}