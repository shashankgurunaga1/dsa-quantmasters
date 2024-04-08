#include <stdio.h>
#include<stdbool.h>
#include <string.h>

#define N 10
#define WORD_LENGTH 10

bool wordsearch(char matrix[N][N], char *word,int row,int col) {
    int wl = strlen(word);

    // Search along the row
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= col- wl; j++) {
            int k;
            for (k = 0; k < wl; k++) {
                if (matrix[i][j+k] != word[k])
                    break;
            }
            if (k == wl)
                return true; // Word found
        }
    }

    

    // Search along the column
    for (int j = 0; j < row; j++) {
        for (int i = 0; i <= col- wl; i++) {
            int k;
            for (k = 0; k < wl; k++) {
                if (matrix[i+k][j] != word[k])
                    break;
            }
            if (k == wl)
                return true; // Word found 
        }
    }



    // Search diagonally (top-right to bottom-left-(number of rows increase and number of columns decrease in that direction))
    for (int i = 0; i <= row- wl; i++) {
        for (int j = N - 1; j >= wl - 1; j--) {
            int k;
            for (k = 0; k < wl; k++) {
                if (matrix[i+k][j-k] != word[k])
                    break;
            }
            if (k == wl)
                return true; // Word found 
        }
    }

    // Search diagonally (top-left to bottom-right(number of rows increase and number ofcolumns increase  in that direction))
    for (int i = 0; i <= row- wl; i++) {
        for (int j = 0; j <= col- wl; j++) {
            int k;
            for (k = 0; k < wl; k++) {
                if (matrix[i+k][j+k] != word[k])
                    break;
            }
            if (k == wl)
                return true; // Word found 
        }
    }



     // Search diagonally (bottom left to top right (number of rows increase and number ofcolumns increase  in that direction))
    for (int i = row-1; i>=wl-1; i--) {
        for (int j = 0; j <= col- wl; j++) {
            int k;
            for (k = 0; k < wl; k++) {
                if (matrix[i-k][j+k] != word[k])
                    break;
            }
            if (k == wl)
                return true; // Word found 
        }
    }
    


    // Search diagonally (bottom right to top left (number of rows increase and number ofcolumns increase  in that direction))
    


    for (int i = row- 1; i >= wl - 1; i--) {
        for (int j = col - 1; j >= wl - 1; j--) {
            int k;
            for (k = 0; k < wl; k++) {
                if (matrix[i-k][j-k] != word[k])
                    break;
            }
            if (k == wl)
                return true; // Word found diagonally (bottom-right to top-left)
        }
    }


    

    return false; // Word not found
}

int main() {
    int row;
    int col;
    char matrix[N][N];
    printf("Enter the dimensions of the matrix such that n<=N");
    scanf("%d%d",&row,&col);

    printf("Enter the values into the matrix\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf(" %c",&matrix[i][j]);
        }
    }
    char word[WORD_LENGTH];
    printf("Enter the word to search: ");
    scanf("%s", word);

    if (wordsearch(matrix, word,row,col))
        printf("Word found!\n");
    else
        printf("Word not found.\n");

    return 0;
}
