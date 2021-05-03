// Battleship Plan
#include <iostream>

using namespace std;



struct Ships{			// Holds Ship Info
    string ship;		// Name
    int  durability;    // Counter until destroyed
};

// Initialize Board
// Pre: allShips has valid data
//      fullBoard has valid data
// Post: Ships have valid locations in/on fullBoard
void InitBoard(int grid[][10]);

// Declare attack, test hit, update arrays
// Pre: Ships have been assigned locations
// Post: Guessed location has been revealed on guessBoard and if there was a hit then ship durability is reduced and win counter is incremented
char Attack(char fullBoard[][10], bool guessBoard[][10], Ships allShips[5]);

// Displays guessed locations
// Pre: guessBoard has been updated with latest attack
// Post: Board of ALL GUESSES had been displayed
void displayBoard(int grid[][10]);

int main()
{
    int grid[10][10]; //declares how big the board is


    InitBoard(grid);    //initializes the board
    displayBoard(grid); // prints board to console

return 0;

}







void InitBoard(int grid[][10])
{
    for(int col=0; col<10; col++) //Outer column loop
    {
        for(int row=0; row<10; row++) //Inner row loop
        {
            grid[col][row]=0;
        }
    }
}

void displayBoard(int grid[][10])  //Print the board with the boats placed on it
{
    cout << "   0|1|2|3|4|5|6|7|8|9" << endl << endl;
    for(int c=0; c<10; c++)  //column loop
    {
        for(int r=0; r<10; r++)  //row loop
        {
            if(r==0)
            {
                cout << c << "  " ; //print row number and spaces before new row
            }
            cout << grid[c][r] ;
            if(r!=9)
            {
                cout << "|";
            }
        }
    cout << endl; //new line at end of column
    }
    cout << endl;
}



