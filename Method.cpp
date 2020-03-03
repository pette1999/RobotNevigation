#include <iostream>
#include <math.h>
#include "Method.h"

using namespace std;

Method::Method()
{
    row = 0;
    column = 0;
    cost = 0;
    euclideanDis = 100000000000.0;
    manhattanDis = 100000000000.0;
}

Method::~Method()
{

}

void Method::askForFile()
{
    cout << "Please input the filename here: " << endl;
    cin >> fileName;
}

void Method::move()
{
    askForFile();
    file f(fileName);
    f.getFile();

    row = f.getFileRow();
    column = f.getFileColumn();

    Grid g(row, column);
    g.opGrid(fileName);

    //while initial stage != final stage
    while(g.init_x != g.final_x && g.init_y != g.final_y)
    {
        double temp_dis = 0.0;
        int position = -1;
        //check four firections
        //0:UP, 1:down, 2:LEFT, 3:RIGHT
        bool possible[4];
        for(bool x : possible)
        {
            x = false;//reset all the bool on possible to false
        }

        if (g.init_x - 1 > -1 && g.myGrid[g.init_x - 1][g.init_y] == '.')
        {
            cout << "You can go up" << endl;
            possible[0] = true;
            temp_dis = getEuclideanDistance(g.init_x - 1, g.init_y, g.final_x, g.final_y);
            if(temp_dis < euclideanDis)
                euclideanDis = temp_dis;
                position = 0;
        }
        if (g.init_x + 1 < row && g.myGrid[g.init_x + 1][g.init_y] == '.')
        {
            cout << "You can go down" << endl;
            possible[1] = true;
            temp_dis = getEuclideanDistance(g.init_x - 1, g.init_y, g.final_x, g.final_y);
            if (temp_dis < euclideanDis)
                euclideanDis = temp_dis;
                position = 1;
        }
        if (g.init_y - 1 > -1 && g.myGrid[g.init_x][g.init_y - 1] == '.')
        {
            cout << "You can go left" << endl;
            possible[2] = true;
            temp_dis = getEuclideanDistance(g.init_x - 1, g.init_y, g.final_x, g.final_y);
            if (temp_dis < euclideanDis)
                euclideanDis = temp_dis;
                position = 2;
        }
        if ((g.init_y + 1 < row && g.myGrid[g.init_x][g.init_y + 1] == '.'))
        {
            cout << "You can go right" << endl;
            possible[3] = true;
            temp_dis = getEuclideanDistance(g.init_x - 1, g.init_y, g.final_x, g.final_y);
            if (temp_dis < euclideanDis)
                euclideanDis = temp_dis;
                position = 3;
        }
        
        if(position == 1)
        {

        }
    }
}

double Method::getEuclideanDistance(int init_x, int init_y, int final_x, int final_y)
{
    return sqrt((init_x - final_x) * (init_x - final_x) + (init_y - final_y) * (init_y - final_y));
}

double Method::getManhattanDistance(int init_x, int init_y, int final_x, int final_y)
{
    return (abs(init_x - final_x) + abs(init_y - final_y));
}