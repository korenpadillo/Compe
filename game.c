/*
rules 

1. if live cell has less than 2 live neighbors, it dies (underpopulation)
2. if live cell has 2 or 3 live neighbors, it lives on to the next generation
3. if live cell has more than 3 live neighbors, it dies (overpopulation)
4. if dead cell has  3 live neighbors, it becomes a live cell (reproduction)
*/
#include <stdio.h>

int Live = 1;
int Dead = 0;
int cell = 1;
int neighbors = 4;


void underpopulation(){
    if (cell == Live){
        if (neighbors < 2){
            cell = Dead;
            
        }
    }

    }
void cellliveson(){
    if (cell == Live){
        if (neighbors == 2 || neighbors ==3){
            cell = Live;
        }
    }
}
void overpopulation(){
    if (cell == Live){
        if (neighbors > 3){
            cell = Dead;
        }
    }
}
void reproduction(){
    if (cell == Dead){
        if (neighbors == 3){
            cell = Live;
        }
    }
}

void rules(){
    underpopulation();
    cellliveson();
    overpopulation();
    reproduction();
}


int main(){

printf("Initial cell state: %d\n", cell);
rules();
printf("Final cell state: %d\n", cell);
return 0;



}
