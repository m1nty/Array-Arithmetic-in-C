#include <stdio.h>
#include <stdlib.h>
#define N 5

//Prototype
int has_identical_col(int mat[][N],int m);int main()

{


    //Test for has_identical_col function
    int testmat[][N] = {{1,2,4,2,2},{3,2,6,2,2},{6,2,8,2,2},{4,2,9,2,2}};//this is the array with 3 identical columns
    int rows = 4;//this is the number of rows of the array
    has_identical_col(testmat,rows);//output should be 3

}



int has_identical_col(int mat[][N],int m)

/* This function contains triple nested for loops to check if a matrix has identical columns and how many if so. Compares one column to all others by checking equality of
indexes in same specific row within columns. The next loop goes through all the rows in these two specific columns, and the check variable is incremented
if the elements in that row are equal. For a column to be identical to another the check variable must equal the number of rows. This continues for all column
combinations.   */


{
    int check =0, ident = 0;//check and ident initilized to 0


    for(int z = 0 ; z<N ; z++)//iterates the comparitive column
    {
        for(int i = 0 ; i<N ; i++)//iterates through all other columns
            {

                for(int r= 0 ; r<m ; r++)//iterates through rows
                    {
                        if((mat[r][z]) == (mat[r][z+i+1]))//if the value in the same row as the compartiive column is equal to the next column it increments check
                            check+=1;
                        else
                            continue;//if the value in row is different in both columns, then continues
                    }
                    if(check == m)//if there were exactly the number of idential values in each row as the number of rows, the columns are identical
                    {
                        ident+=1;//increments ident up, which repersents number of identical columns
                        check = 0;//resets check to 0 in both cases.
                    }
                    else
                        check = 0;


            }

    }
    if(ident>1)//if the number of columns identical is greater or equal to 2 it will return 1 and print the number of identical columns
    {
        printf("%d\n",ident);
        return 1;
    }
    else
        return 0;


}






