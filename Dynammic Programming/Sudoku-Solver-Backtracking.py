
f = open('board.txt', 'r')
lines = f.readlines()
board = [[ int(n) for n in line.split() ] for line in lines ]
f.close()


def checkIfPlacingIsPossible(currentRow,currentCol,number):
    gridRowNum = int( currentRow / 3)
    gridColNum = int( currentCol / 3)
    for r in range(9):
        if board[r][currentCol] == number + 1 or board[currentRow][r] == number + 1 :
            return 0
    for r in range(gridRowNum * 3, gridRowNum * 3 + 3):
        for c in range( gridColNum * 3, gridColNum * 3 + 3 ):
            if r == currentRow and c == currentCol:
                pass
            elif board[r][c] == number + 1:
                return 0
    return 1   

def printBoard():
    for i in range(9):
        if i%3 == 0 and i != 0:
            for _ in range(9):
                print(" - ",end="")
            print() 
        for j in range(9):
            print(board[i][j],end=" ")
            if j%3 == 2 and j != 8:
                print(" | ",end="")
            
        print()
        
def sudoku():
    for i in range(9):
        for j in range(9):
            if board[i][j] == 0:
                for number in range(9):
                    if checkIfPlacingIsPossible(i,j,number):
                        board[i][j] = number+1
                        sudoku()
                        board[i][j] = 0
                return
    printBoard()
    input("Press Enter")

sudoku()