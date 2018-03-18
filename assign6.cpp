#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string startingInput();

int stringToInt(string str) {
  int res = 0;
  for(int i = 0; i < str.length(); i++) {
    res = res * 10;
    res += int(str[i]) - 48;
  }
  return res;
}

char** makeBoard(int rows, int cols) {
  char** array = new char*[rows];
  for(int i = 0; i < rows; i++) {
    array[i] = new char[cols];
  }
  return array;
}

int fillBoard(char** board, int rows, int cols) {
  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      board[i][j] = ' ';
    }
  }
  for(int i = 0; i < (cols/2)-1; i++) {
    for(int j = (i + 1) % 2; j < rows; j += 2) {
      board[i][j] = 'O';
    }
  }
  for(int i = (cols/2)+1; i < cols; i++) {
    for(int j = (i + 1) % 2; j < rows; j += 2) {
      board[i][j] = 'X';
    }
  }
}

int printBoard(char** board, int rows, int cols) {
  for (int i = 0; i <= rows; i++) {
    cout << i << "   ";
  }
  cout << endl;
  for(int i=0; i<rows; i++){
    cout << i + 1 << "  ";
    for(int j=0; j<cols; j++) {
      if (i%2 == 0 && j%2 == 0)
        cout << "|\033[30;47m " << board[i][j] << " ";
      else if (i%2 == 1 && j%2 == 1)
        cout << "|\033[30;47m "<< board[i][j] << " ";
      else
        cout << "|\033[0m " << board[i][j] << " ";
      cout << "\033[0m";
    }
  cout << endl;
  }
}

string checkStartingPoint(string str) {
  int x = str[0] - 48; int y = str[1] - 48;
  cout << x << y << endl;
}

string firstInput() {
  string startingInput = "";
  while(startingInput.length() != 2) {
    cout << endl;
    cout << "EX: 36 means over 3, down 6" << endl;
    cout << "Please enter the piece that you would like to move: ";
    getline(cin, startingInput);
  }
  return startingInput;
}

string secondInput() {
  string moveInput = "";
  while(moveInput.length() != 2) {
    cout << endl;
    cout << "EX: 42 means " << endl;
    cout << "Please enter the location that you would like to place it: ";
    getline(cin, moveInput);
  }
  return moveInput;
}

void deleteBoard(char** board, int rows) {
  for(int i = 0; i < rows; i++) {
    delete [] board[i];
  }
  delete [] board;
  board = NULL;
}

int checkingInput() {
  string boardSize = "";
  int intSize = 0;
  cout << "Please enter either an 8, 10, or 12 for your board size: ";
  getline(cin, boardSize);
  intSize = stringToInt(boardSize);
  if((intSize == 8)or(intSize == 10)or(intSize == 12)) {
    return intSize;
  }
  else {
    return checkingInput();
  }
}

int main(int argc, char** argv) {
  int rows = 0, cols = 0;
  if(argc != 2) {
    int intSize = checkingInput();
    rows = intSize;
    cols = intSize;
  }
  else {
    if(argv[1] == string("8")) {
      rows = 8; cols = 8;
    }
    else if(argv[1] == string("10")) {
      rows = 10; cols = 10;
    }
    else if(argv[1] == string("12")) {
      rows = 12; cols = 12;
    }
  }
  char** board = makeBoard(rows, cols);
  fillBoard(board, rows, cols);
  printBoard(board, rows, cols);
  string startingInput = firstInput();
  checkStartingPoint(startingInput);
  string moveInput = secondInput();
  deleteBoard(board, rows);
}
