/*
Maze.cpp 완성한 후, 이 과정을 기술할 것.
main.cpp에서 새롭게 기능을 추가하고, 그 내용을 기술할 것
실행화면 캡쳐하여 captures 디렉토리에 넣고, 그 경로를 기입할 것
*/

#include <iostream>
#include <fstream>
#include <vector>

#define START   '*'
#define EXIT    'E'
#define TRAP    '#'
#define OPEN    '.'
#define TRIED   '+'

using namespace std;

class Maze{
private:
    vector< vector<char> > maze;
    int size;       // size of square maze 
    int escaped;    // true(1) or false(0)
    int start_x, start_y;   // Start point
    void init();
    void tryToEscape(int row, int col);
public:
    int count=0;
    Maze(int _size);
    Maze(string _filename);
    ~Maze(){};
    void setStart(int x, int y);
    void printMaze();
    void run();
};
