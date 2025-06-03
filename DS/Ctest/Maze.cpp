#include "Maze.h"

Maze::Maze(int _size){
    size = _size;
    init();
}

Maze::Maze(string _filename){
    ifstream file;
    file.open(_filename);    
    file >> size; 
    init();
    for(int i=1; i<=size; i++)
        for(int j=1; j<=size; j++)
            file >> maze[i][j];
    file.close();
}

void Maze::init(){
    escaped = 0;
    start_y = start_x = 1;
    for(int i=0; i<size+2; i++)
        maze.assign(size+2, vector<char>(size+2,TRAP));
}

void Maze::tryToEscape(int row, int col){
    if((maze[row][col] != TRIED)&&(maze[row][col] != TRAP )&&(OPEN)){
        if(maze[row][col] == EXIT){
            escaped = 1;
        }else{
            maze[row][col] = TRIED;
            count++;
            tryToEscape(row+1, col);
            tryToEscape(row-1, col);
            tryToEscape(row, col+1);
            tryToEscape(row, col-1);
        }
    }
}

void Maze::printMaze(){

    maze[start_x][start_y] = START;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
}

void Maze::setStart(int x, int y){
    maze[start_x][start_y] = OPEN;
    start_x = x;
    start_y = y;
    maze[start_x][start_y] = START;
}

void Maze::run(){
    tryToEscape(start_x, start_y);
    if(escaped == 1){
        cout << "Success!" << endl;
        cout << "count : " <<  count <<endl;
    }
    else{
        cout << "Fail!" << endl;
    }
}