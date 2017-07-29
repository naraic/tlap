#! /usr/bin/env python3

from math import sqrt
from sys import exit

def get_side(size):
    side = int(sqrt(size))
    if(side*side != size):
        exit(1)
    else:
        return side 

def setup_board(size):
    side = get_side(size)
    board = []
    for i in range(int(sqrt(size))):
        board.append([])
        for j in range(int(sqrt(size))):
            board[i].append((i*int(sqrt(size)))+j+1)
    board[side-1][side-1] = 0
    return board
    
def print_board(board):
    for i in range(len(board)):
        for j in range(len(board[i])):
            print(str(board[i][j]) + ' ', end='')
        print(' ')

def find_space(board):
    for i in range(len(board)):
        for j in range(len(board[i])):
            if board[i][j] == 0:
                return (i, j)

def move(board, compass):

    x, y = find_space(board) 
    if compass == 'n':
        y = y - 1
    if compass == 's':
        y = y + 1
    if compass == 'e':
        x = x + 1
    if compass == 'w':
        x = x - 1
    
    if x < 0 or y < 0 or x > len(board)-1 or y > len(board) -1:
        return
    else 

    
if __name__ == "__main__":
    size = 9
    board = setup_board(size)
    print_board(board) 
