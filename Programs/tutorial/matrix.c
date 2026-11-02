#include <stdio.h>
#include <stdlib.h>

const int ROW = 3;
const int COL = 2;    

void PrintMatrix(){
    
}

int main(){
    int matrix1[ROW][COL];

    for(int row = 0; row < ROW; row++){
        for(int col = 0; col < COL; col++){
            matrix1[row][col] = row*10 + col;
        }
    }


    int *matrix2[ROW];

    for(int row = 0; row < ROW; row++){
        matrix2[row] = calloc(COL, sizeof(int));
        for(int col = 0; col < COL; col++){
            matrix2[row][col] = row*10 + col;
        }
    }

    int ** matrix3;
    matrix3 = calloc(ROW, sizeof(int *));
    for(int i = 0; i < ROW; i++){
        matrix3[i] = calloc(COL, sizeof(int));
    }

    for(int row = 0; row < ROW; row++){
        for(int col = 0; col < COL; col++){
            matrix3[row][col] = row*10 + col;
        }
    }
}