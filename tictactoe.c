#include <stdio.h>
void printboard(int a, char *arr[a]){
    for(int i = 0; i < a; i++){
        printf("%s", arr[i]);
        if(i==2 || i==5 || i==8){
        printf("\n");
        }
    }
}
int main()
{
    int space = 0, gamerunning = 1;
    char *turn = "X";
    char *board[9] = {"E","E","E","E","E","E","E","E","E"};
    while(gamerunning){
        printboard(9, board);
        printf("player %s please enter a space [1 - 9]: ", turn);
        scanf("%d", &space);
        if(board[space-1] == "E"){
            board[space - 1] = turn;
        }
        for(int i = 0; i < 5; i++){
            printf("\n");
        }
        if(board[0] == turn && board[1] == turn && board[2] == turn){
            gamerunning = 0;
            board[0] = "-";
            board[1] = "-";
            board[2] = "-";
            printf("\n");
            printboard(9, board);
            printf("win %s", turn);
        } else if(board[3] == turn && board[4] == turn && board[5] == turn){
            gamerunning = 0;
            board[3] = "-";
            board[4] = "-";
            board[5] = "-";
            printf("\n");
            printboard(9, board);
            printf("win %s", turn);
        } else if(board[6] == turn && board[7] == turn && board[8] == turn){
            gamerunning = 0;
            board[6] = "-";
            board[7] = "-";
            board[8] = "-";
            printf("\n");
            printboard(9, board);
            printf("win %s", turn);
        } else if(board[0] == turn && board[3] == turn && board[6] == turn){
            gamerunning = 0;
            board[0] = "|";
            board[3] = "|";
            board[6] = "|";
            printf("\n");
            printboard(9, board);
            printf("win %s", turn);
        } else if(board[1] == turn && board[4] == turn && board[7] == turn){
            gamerunning = 0;
            board[1] = "|";
            board[4] = "|";
            board[7] = "|";
            printf("\n");
            printboard(9, board);
            printf("win %s", turn);
        } else if(board[2] == turn && board[5] == turn && board[8] == turn){
            gamerunning = 0;
            board[2] = "|";
            board[5] = "|";
            board[8] = "|";
            printf("\n");
            printboard(9, board);
            printf("win %s", turn);
        } else if(board[0] == turn && board[4] == turn && board[8] == turn){
            gamerunning = 0;
            board[0] = "\\";
            board[4] = "\\";
            board[8] = "\\";
            printf("\n");
            printboard(9, board);
            printf("win %s", turn);
        } else if(board[6] == turn && board[4] == turn && board[2] == turn){
            gamerunning = 0;
            board[2] = "/";
            board[4] = "/";
            board[6] = "/";
            printf("\n");
            printboard(9, board);
            printf("win %s", turn);
        } 
        if (turn == "X"){
            turn = "O";
        } else if (turn == "O") {
            turn = "X";
        }
    }
}
