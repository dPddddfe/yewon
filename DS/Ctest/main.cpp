#include <iostream>
#include "Maze.h"

int main(){
    string filename;
    int start_x, start_y;
    cout << "Enter the maze data file > ";
    cin >> filename;
    Maze m(filename);
    m.printMaze();
    cout << "Enter the start_x and start_y > "; 
    cin >> start_x >> start_y;
    m.setStart(start_x, start_y);
    m.run();
    m.printMaze();
}