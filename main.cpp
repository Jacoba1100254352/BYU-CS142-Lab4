#include <iostream>

using namespace std;

/****************************
*   Function Declarations   *
****************************/

///   Input Function   ///
void InputAorB ( char& );

///   Decision Path Functions   ///
void DecisionPath1 ( char );
void DecisionPath2 ( char );
void DecisionPath3 ( char );
void DecisionPath4 ( char );
void DecisionPath5 ( char );

/********************
*   Main Function   *
********************/

int main()
{
    char decisionPointChoice = ' '; //Initializing Variable for compiler's sake

    ///   Beginning   ///
    cout << "Welcome to Choose Your Own Adventure!" << endl;
    cout << "\nPress enter to continue ...";
    cin.get();
    cout << endl;

    DecisionPath1( decisionPointChoice ); //This is the default Adventure starting block

    cout << "\nCongratulations! You have reached the end of the adventure!" << endl;

    return 0;
}


/*********************
*   Input Function   *
*********************/

void InputAorB ( char& decisionPointChoice )
{
    decisionPointChoice = ' '; //Setting it to a 'space' so that the while loop will trigger

    while ( cin.fail() || ( decisionPointChoice != 'A' && decisionPointChoice != 'B' ) )
    {
        cout << "Enter 'A' or 'B': ";
        cin >> decisionPointChoice;
    }
    cout << endl;
}


/******************************
*   Decision Path Functions   *
******************************/

void DecisionPath1 ( char decisionPointChoice )
{
    cout << "You land on a distant planet. Do you " << endl
         << "A) Leave your pod and explore, or " << endl
         << "B) Look nervously out the window" << endl;
    InputAorB( decisionPointChoice );

    if ( decisionPointChoice == 'A' )
    {
        DecisionPath3 ( decisionPointChoice );
    }
    else if ( decisionPointChoice == 'B' )
    {
        DecisionPath2 ( decisionPointChoice );
    }
    else
    {  // Note, this should never be thrown in this context but is a backup/default for this else statement
        throw invalid_argument ( "An invalid decision path option was passed." );
    }
}

void DecisionPath2 ( char decisionPointChoice )
{
    cout << "You see nothing but dirt and rocks outside. Do you " << endl
         << "A) Leave your pod and explore, or " << endl
         << "B) Start the engines and return to the space station." << endl;
    InputAorB( decisionPointChoice );

    if ( decisionPointChoice == 'A' )
    {
        DecisionPath3( decisionPointChoice );
    }
    else if ( decisionPointChoice == 'B' ) //Ending 1
    {
        cout << "You return safely, but learned nothing new..." << endl;
    }
    else
    {  // Note, this should never be thrown in this context but is a backup/default for this else statement
        throw invalid_argument ( "An invalid decision path option was passed." );
    }
}

void DecisionPath3 ( char decisionPointChoice )
{
    cout << "You venture into the unknown and leave the pod. Do you " << endl
         << "A) Take off your helmet to see if you can breathe, or " << endl
         << "B) Leave it on and observe your surroundings." << endl;
    InputAorB( decisionPointChoice );

    if ( decisionPointChoice == 'A' )
    {
        cout << "You pull a \"Galaxy Quest\", take of your helmet, " << endl
             << "and take a deep breath, you're fine. " << endl
             << "You observe your surroundings.\n" << endl;
        DecisionPath4( decisionPointChoice );
    }
    else if ( decisionPointChoice == 'B' )
    {
        DecisionPath4( decisionPointChoice );
    }
    else
    {  // Note, this should never be thrown in this context but is a backup/default for this else statement
        throw invalid_argument ( "An invalid decision path option was passed." );
    }
}

void DecisionPath4 ( char decisionPointChoice )
{
    cout << "You notice a small object moving aways off, Do you " << endl
         << "A) Walk towards it, or B) Take soil samples" << endl;
    InputAorB( decisionPointChoice );

    if ( decisionPointChoice == 'A' )
    {
        DecisionPath5( decisionPointChoice );
    }
    else if ( decisionPointChoice == 'B' ) //Ending 2
    {
        cout << "You take soil samples and return to your pod." << endl
             << "Today's work is done." << endl;
    }
    else
    {  // Note, this should never be thrown in this context but is a backup/default for this else statement
        throw invalid_argument ( "An invalid decision path option was passed." );
    }
}

void DecisionPath5 ( char decisionPointChoice )
{
    cout << "You observe it for a moment, it is small and dense, " << endl
         << "seems very much like a moving rock. " << endl
         << "Then you hear a large creature, coming fast. " << endl
         << "The small creature quickens it's pace. Do you " << endl
         << "A) Run, or B) Try to hide." << endl;
    InputAorB( decisionPointChoice );

    if ( decisionPointChoice == 'A' ) //Ending 3
    {
        cout << "You try to run, but are caught by the creature and killed." << endl;
    }
    else if ( decisionPointChoice == 'B' ) //Ending 4
    {
        cout << "You find no-where to hide and are caught by the creature and killed." << endl;
    }
    else
    {  // Note, this should never be thrown in this context but is a backup/default for this else statement
        throw invalid_argument ( "An invalid decision path option was passed." );
    }
}

/*
Your program must utilize at least 3 functions

At least one function (other than main) needs to have at least 2 parameters
At least one function (other than main) needs to return a value
Suggestions for useful functions:

A function to handle printing a prompt and reading user input, returning the value of the user's input.
Such a function could be easily extended to be even more useful in the next lab. This function would need a string parameter (containing the prompt),
and possibly another parameter indicating how many options are available (i.e. 3, could indicate that 1, 2, and 3 are valid choices,
think about what you could do with this information…)

You could implement the various choices or "paths" of your game as functions (i.e. if the user chooses option 'a' which lead them to a dungeon,
then GoToDungeon() is called, etc.)
*/