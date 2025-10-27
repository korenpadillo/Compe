/*
rules 

1. if live cell has less than 2 live neighbors, it dies (underpopulation)
2. if live cell has 2 or 3 live neighbors, it lives on to the next generation
3. if live cell has more than 3 live neighbors, it dies (overpopulation)
4. if dead cell has  3 live neighbors, it becomes a live cell (reproduction)
*/

#include <stdio.h>

 #define Live 1
 #define Dead 0
 #define Height 3
 #define Width 3


 int grid[Height][Width]={  
    {Dead, Dead, Dead},
    {Dead, Live, Dead},
    {Dead, Dead, Dead}
};

int row = sizeof(grid) / sizeof(grid[0]);   
int column = sizeof(grid[0]) / sizeof(grid[0][0]);



 

                          
                          

int get_cell_next_generation(int cell, int neighbors); // next cell generation,
int display_grid(); // prints the whole grid 
int count_live_neighbors(int x, int y); // counts live neighbors of a cell

// -----------------------------------------------------------------------------




int main(){

display_grid();  
printf ("live neighbor ;%d \n",count_live_neighbors(0,1));

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

int display_grid(){
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int count_live_neighbors(int x, int y){
    int live_neighbors = 0;
    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            if(i == 0 && j == 0) continue; 
            int newX = x + i;
            int newY = y + j;
            if(newX >= 0 && newX < row && newY >= 0 && newY < column){
                live_neighbors += grid[newX][newY];
            }
        }
    }
    return live_neighbors;
}
next_generation_grid(){
    for (int y = 0; y < Height; y++) {
    for (int x = 0; x < Width; x++) {
        int current_state = grid[y][x];
        int live_neighbors = count_live_neighbors(Height, Width, grid, x, y);
        int next_state = get_next_cell_state(current_state, live_neighbors);
        grid[y][x] = next_state;
    }
}
}