/*
rules 

1. if live cell has less than 2 live neighbors, it dies (underpopulation)
2. if live cell has 2 or 3 live neighbors, it lives on to the next generation
3. if live cell has more than 3 live neighbors, it dies (overpopulation)
4. if dead cell has  3 live neighbors, it becomes a live cell (reproduction)
*/

#include <stdio.h>

const int Live = 1;
const int Dead = 0;


int get_cell_next_generation(int cell, int neighbors);
int test_get_cell_next_generation();
// -----------------------------------------------------------------------------




int main(){

printf("%d \n", get_cell_next_generation(Live, 1));


printf("  passed!\n");

return 0;
}

int get_cell_next_generation(int cell, int neighbors){
    if(cell == Live){
        if(neighbors < 2){
            return Dead; // underpopulation
        }
        else if(neighbors == 2 || neighbors == 3){
            return Live; // lives on
        }
        else{
            return Dead; // overpopulation
        }
    }
    else{
        if(neighbors == 3){
            return Live; // reproduction
        }
        else{
            return Dead; // remains dead
        }
    }
}

