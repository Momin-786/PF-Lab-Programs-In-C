#include <iostream>
#include <vector>

using namespace std;

const char PLAYER = 'X';
const char COMPUTER = 'O';
const char EMPTY = ' ';

// Function to print the Tic-Tac-Toe board
void printBoard(const vector<char>& board) {
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}

// Function to check if a player has won
bool checkWin(const vector<char>& board, char player) {
    // Check rows
    for (int i = 0; i < 9; i += 3) {
        if (board[i] == player && board[i + 1] == player && board[i + 2] == player)
            return true;
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[i] == player && board[i + 3] == player && board[i + 6] == player)
            return true;
    }

    // Check diagonals
    if ((board[0] == player && board[4] == player && board[8] == player) ||
        (board[2] == player && board[4] == player && board[6] == player))
        return true;

    return false;
}

// Function to check if the game is a draw
bool checkDraw(const vector<char>& board) {
    for (char cell : board) {
        if (cell == EMPTY)
            return false;
    }
    return true;
}

// Function to evaluate the game state
int evaluate(const vector<char>& board) {
    if (checkWin(board, PLAYER))
        return -1;
    else if (checkWin(board, COMPUTER))
        return 1;
    else
        return 0;
}

// Minimax function
int minimax(vector<char>& board, int depth, bool isMaximizer) {
    int score = evaluate(board);

    if (score == 1 || score == -1)
        return score;

    if (checkDraw(board))
        return 0;

    if (isMaximizer) {
        int maxScore = INT32_MIN;
        for (int i = 0; i < 9; i++) {
            if (board[i] == EMPTY) {
                board[i] = COMPUTER;
                int currentScore = minimax(board, depth + 1, false);
                board[i] = EMPTY;
                maxScore = max(maxScore, currentScore);
            }
        }
        return maxScore;
    } else {
        int minScore = INT32_MAX;
        for (int i = 0; i < 9; i++) {
            if (board[i] == EMPTY) {
                board[i] = PLAYER;
                int currentScore = minimax(board, depth + 1, true);
                board[i] = EMPTY;
                minScore = min(minScore, currentScore);
            }
        }
        return minScore;
    }
}

// Function to find the best move for the computer using the Minimax algorithm
int findBestMove(vector<char>& board) {
    int bestScore = INT32_MIN;
    int bestMove = -1;

    for (int i = 0; i < 9; i++) {
        if (board[i] == EMPTY) {
            board[i] = COMPUTER;
            int currentScore = minimax(board, 0, false);
            board[i] = EMPTY;

            if (currentScore > bestScore) {
                bestScore = currentScore;
                bestMove = i;
            }
        }
    }

    return bestMove;
}

// Function to play the game
void playGame() {
    vector<char> board(9, EMPTY);
    int currentPlayer = 0;

    cout << "Welcome to Tic-Tac-Toe!\n" << endl;
    cout << "You are playing as X. Enter a number from 1 to 9 to make a move.\n" << endl;

    while (true) {
    	cout<<"\n\n";
        printBoard(board);
        cout<<"\n\n";

        if (currentPlayer % 2 == 0) {
            int move;
            cout << "Your turn:  ";
            cin >> move;
			cout<<"\n";
			
            if (move < 1 || move > 9 || board[move - 1] != EMPTY) {
                cout << "Invalid move. Try again.\n" << endl;
                continue;
            }

            board[move - 1] = PLAYER;

            if (checkWin(board, PLAYER)) {
                cout << "Congratulations! You won!\n" << endl;
                break;
            }
        } else {
            int move = findBestMove(board);
            board[move] = COMPUTER;

            if (checkWin(board, COMPUTER)) {
                cout << "You lost! Better luck next time.\n" << endl;
                break;
            }
        }

        if (checkDraw(board)) {
            cout << "It's a draw!\n" << endl;
            break;
        }

        currentPlayer++;
    }

    printBoard(board);
    cout << "Game over.\n" << endl;
}

int main() {
    playGame();
    return 0;
}
