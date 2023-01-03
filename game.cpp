#include <iostream>
using namespace std;
                                // Guessing game
                                // with a single Array.
int main() {

      //We put "1" to indicate that there is a ship.
    bool ships[] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0};
    int hits = 0, turn_count = 0, number = 0;

    while (hits < 4) {

        cout << "\nEnter the correct place of the ship ";
        cin >> number;
        // if the number that the user intered >= 20 repeat the question again
        // until the number < 20;
        if (number >= 20) {
            cout << "Please make sure you enter a valid number, you could choose a number between 0 : 19 onle\n";
        } 
        else {
            if (ships[number]) {
                // due to the user enter the right place and won, remove this place by
                // setting the value to Zero; in order to couldn't use this place again
                // so that if he enter this place again the program will tell him
                // "oops...........";
                ships[number] = 0;
                cout << "\nGood Hit, Keep going on this \n";
                hits++;
                // display the remain turns for the user
                // according to we set 4 turns to the user, we decrease this number "4"
                // with the right hit;
                cout << "you have " << (4 - hits) << " left\n\n\n";
            } 
            else {
                cout << "\nOops, please trye again \n\n";
            }
            // this count existe outside of if condition in order to count the correct
            // and wrong turns. how many turns the player has taken
            turn_count++;
        } // the end of if condition about if the number > 20 or what

    } // the end of the while loop

    // After the while section end
    // and in the main section we tell the user
    // that he win the game and It's over since he got here.
    // also we show him the count of his turns he take to Victory
    cout << "Victory! \n";
    cout << "the turns you take to hit the ship 5 times is \" " << turn_count<< " \" times\n\n";

    return 0;
}

            // creating the game with 2Demintional Array, you can reactive it and enjoy.
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   // We put "1" to indicate there is a ship.
//     bool ships[4][4] = {
//         { 0, 1, 1, 0 },
//         { 0, 0, 0, 0 },
//         { 0, 0, 1, 0 },
//         { 0, 0, 1, 0 }
//     };
//   // Keep track of how many hits the player has and how many turns they have
//   // played in these variables
//     int hits =0, numberOfTurns =0, row =0, column = 0;

//   // Allow the player to keep going until they have hit all four ships
//     while (hits < 4) {

//         cout << "Selecting coordinates\n";

//         // Ask the player for a row
//         cout << "Choose a row number between 0 and 3: ";
//         cin >> row;

//         // Ask the player for a column
//         cout << "Choose a column number between 0 and 3: ";
//         cin >> column;

//         if (row > 3 || column > 3) {
//             cout << "Please make sure you enter a valid number, you could choose a "
//                 "number between 0 : 3 onle for Row and Column\n";
//         } else {
//             // Check if a ship exists in those coordinates
//             if (ships[row][column]) {
//                 // If the player hit a ship, remove it by setting the value to zero.
//                 ships[row][column] = 0;

//                 // Increase the hit counter
//                 hits++;

//                 // Tell the player that they have hit a ship and how many ships are left
//                 cout << "Hit! \" " << (4 - hits) << " \" left.\n\n";
//             } else {
//                 // Tell the player that they missed
//                 cout << "Miss\n\n";
//             }
//         } // the end of the if condition

//         // Count how many turns the player has taken
//         numberOfTurns++;
//     } // the end of while loop

//     cout << "Victory!\n";
//     cout << "You won in \" " << numberOfTurns << " \" turns";

//     return 0;
// }


// made with love, by: Eng. Ahmed Abdel-Rahman