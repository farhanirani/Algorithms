n = int(input("Enter the number of queens : "))
x = [0] * (n+1)

def place(rowNum,i):
    for j in range(1,rowNum):
        if(x[j] == i) or (abs(x[j]-i) == abs(j-rowNum)):
            return 0
    return 1

def printt(n):
    for temp in range(1,n+1):
        for temp2 in range(1,n+1):
            val = x[temp]
            if temp2 == val:
                print(" Q ",end="")
            else:
                print(" * ",end="")
        print()
    print()

def nQueens(rowNum,n):
    for i in range(1,n+1):
        if (place(rowNum,i) == 1):
            x[rowNum] = i
            if rowNum == n:
                printt(n)
            else:
                nQueens(rowNum+1,n)

nQueens(1,n)

