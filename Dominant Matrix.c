/*
In mathematics, a square matrix is said to be diagonally dominant if for every row of the matrix,
the magnitude of the diagonal entry in a row is larger than or equal to the sum of the magnitudes
of all the other entries in that row.
*/

#include <stdio.h>

#define N 4

//Testing matrices
int mata[2][2] = {3,4,-1,2}; //Dominant
int matb[4][5] = {10,9,8,9,20,1,2,3,4,5,5,4,3,2,1,4,3,5,2,7,-1,-1,-3,-4,-5}; //dominant
int matc[5][3] = {3,4,6,5,6,7,0,0,0,2,4,6,29,3,6}; //not dominant
int matd[4][4] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //not dominant
int is_dominant(int mat[][N], int n);

int main(void){


    printf("Testcase is: %s", (is_dominant(matd, 4) == 0) ? "Not Dominant" : "Dominant");

    return 0;
}

int is_dominant(int mat[][N], int n){

    for(int colNum = 0; colNum < N; colNum++){ //Outerloop iterates through columns
        for(int rowNum = 1; rowNum < n; rowNum++){ //Inner loop iterates through rows

            if(mat[0][colNum] <= mat[rowNum][colNum]) //If top element not bigger than bottom then: return 0 and break function
                return 0;
        }
    }

    return 1; //return 1 is matrix is dominant
}
