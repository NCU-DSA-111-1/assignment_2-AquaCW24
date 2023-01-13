# Shogi

## Introduction

This is a shogi game writen by C language. This project uses linked list data structure. You can follow the rule of shogi to play this program. This program has some features. First, you can regret by enter '0'. Second, you can replay the previous game you have played.

## Functions

1. Move pieces
2. Eat opposite's pieces
3. Regret actions
4. Save actions to file
5. Read file previous play

## Compile

```
make
```

## Operation

### Option 1:To create a new game:

```
make run
```

### Option 2:To load a history of previous game:

```
make load
```

### Usage of creating a new game

#### Blue's pieces movement

```
[Blue] Please enter coordinates of the the piece you want to move:
5 7
[Blue] Please enter the coordinates of the place you want to put the piece onto:
5 6
```

#### Red's pieces movement

```
[Red] Please enter coordinates of the the piece you want to move:
3 3
[Red] Please enter the coordinates of the place you want to put the piece onto:
3 4
```

#### Regret -> enter 0

```
[Blue] Please enter the coordinates of the piece you want to move:
0
```

### Usage of loading a history of previous game

```
Enter 'f' to go to the next round.
Enter 'b' to go to the previous round.
Enter 'x' to close the file.
```

## Reference

1. https://shogi.hk/Gameplay-of-Japanese-Chess-Shogi/

2. https://www.796t.com/article.php?id=190246

3. https://github.com/cutechess/sloppy/blob/master/src/pgn.c

4. https://blog.51cto.com/990487026/1792623?articleABtest=1
