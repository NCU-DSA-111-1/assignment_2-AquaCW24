//MUST TODO:
//OPTION1: ./main.out -n {FILENAME}.txt => New game
//OPTION2: ./main.out -l {FILENAME}.txt => Load previous game

#include "func.h"

int option;
bool isStandard;    //Whether it breaks the rule, 0 means it does.
bool gameOverSign;  //The game ends when it becomes 0.
bool restart;   //Whether to restart the game.
FILE *ChessManual;

int main(int argc, char *argv[])
{   
    //程式執行時，引數決定 (1)開新局 "–n new_game_file_name" 或 (2)載入棋譜 "–l old_game_file_name"。
    while((option = getopt(argc, argv, "n:l:")) != -1) 
    { 
        switch(option) 
        { 
            case 'n':
                
                BoardBuilding();
                PrintBoard();
                ChessManual = fopen(optarg, "w+");
                filewrite();
                //Beginning of the game.
                int turn = -1;
                while (gameOverSign) {
                    isStandard = 1;
                    turn *= (-1);
                    switch (turn) {
                        case 1:
                            blueMove();
                            turn = (restart) ? (turn*-1) : turn;
                            break;
                        case -1:
                            redMove();
                            turn = (restart) ? (turn*-1) : turn;
                            break;
                    }
                    isGameOver();
                    
                }
                printf("Game over!\n");
                fclose(ChessManual);
                break;

            case 'l': 
                system("clear");
                ChessManual = fopen(optarg, "r");
                manual();
                fclose(ChessManual);
                break;

            case '?': 
                printf("Wrong Input.");
                break; 
        } 
    } 

    return 0;
}
