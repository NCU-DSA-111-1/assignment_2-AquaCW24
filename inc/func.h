#ifndef _FUNC_H
#define _FUNC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <unistd.h> 

struct Node {
    char data;
    struct Node* next;
};
typedef struct Node Node;

void BoardBuilding();
void PrintBoard();
int RedOrBlue(int x, int y);
void redMove();
void blueMove();
void isGameOver();
void rulesOfAllKindsOfChessPieces();
void MovingThePiece();
void NumberOrNot();
void xipush(int data); 
int xipop();
void xjpush(int data);
int xjpop();
void yipush(int data); 
int yipop();
void yjpush(int data); 
int yjpop();
void wpush(char *data);
char *wpop();
int isEmpty();
void regret();
void filewrite();
void rewrite();
void translating(int i, int j);
void fileread();
void manual();

#endif