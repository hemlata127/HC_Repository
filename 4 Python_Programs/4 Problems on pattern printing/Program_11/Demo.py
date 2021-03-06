'''
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output :
 * # * #
 * # * #
 * # * # 
'''

def Display(row,col):
    if(row<0):
        row = -row;
    if(col<0):
        col = -col;
        
    for i in range(0,row):
        for j in range(0,col):
            if(j%2 == 0):
                print("* ",end = " ");
            else:
                print("# ",end = " ");
        print("");

def main():
    row = int(input("Enter row value: "));
    col = int(input("Enter column value: "));
    Display(row,col);
    
if __name__ == "__main__":
    main();