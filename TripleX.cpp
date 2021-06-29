#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // Print welcome messages to the terminal
    std::cout << "\n\nWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWMWWMWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNKKNWWWMWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW0l,..:dKWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWNNNNWWWWWWWWWWWWWWWWWWXo.     .'kNWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWWWWWWWNX0kxdollloxO0XNWWWWWWWWWWWO;         ;KWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWWWWXOdl:;;;;::;:::cloxk0XXWWWWWWO.    .',...lNMWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWNKko:,,'';::ccc:::cccccloodk00KOl.    'clodccOWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWKkl;'''''',;:cloolloodoooooooodxxd;     .':oooKWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWKd:''..''..',,;:clooodddooodooolooddc,.      .;OWWWWWMWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWNOc,''..'......';:ccclooolc;,,'....'...',.    .:OWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWNx;''....'. .....;::cc:;;,'....... .   ..'.. .;ONWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWNd,'.... ... .'...,,,'.........    ..  ......';kWWWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWk;............'''....   ...................';;;lKMWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWMXl''''''.''.''''.....     ...............,,,lxx:.cKWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWMXo'',;;,'''...''.....       ..........  ..';:d0xc'lNMWWMWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWKo,,',;,,,'......','.                     .'cxkc,dNWMWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWW0l::;,,'.',:cldxOo.             .       .. .',',kWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWW0ccc::coxOKNWWWWk.             ..    ...xKo'..,oXWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWKc:dxk0NWWWWWWWWk.               ......:OWWNXOk0NWWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWNKOKNWWWWWWWWWWWX:          ...........oXWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWNNWWWWWWWWWWWWWWWX:          .........;kNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWWWWWWW0, .. ...    .......;kNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWWWWWWM0,..'.'....    ..';:lld0XWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWMWWWWWK:..',;::;;,,''',;::::cloOXWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWWWWWWWNo...',;ccllllc;,,,,,,;:cldOXWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWWWWWWWWO,..',:clddddo;..'''',,;clox0NWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
    std::cout << "WWWWWWWWWWWWWWWWWWWWWWMNl...':codddk0x;....''',,:cloONWWMWWWWWWWWWWWWWWWWWWWWWWW\n\n";
    std::cout << "                      Welcome to TripleX Heist Edition\n";
    std::cout << "                          Coded by Devin Mosca\n\n";
    std::cout << "Level " << Difficulty; 
    std::cout << " You've robbed a bank and now you're in the safe room.\n";
    std::cout << "You need to crack all of the locks to get the cash...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    
    // Declare 3 number code 
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to terminal 
    std::cout << "+++ There are 3 numbers in the lock combinations";
    std::cout << "\n+++ The numbers add-up to: " << CodeSum;
    std::cout << "\n+++ The numbers multiply to give: " << CodeProduct <<std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n~~~ That's 1 lock down, crack the rest to get the cash! ~~~\n";
        return true;
    }
    else
    {
        std::cout << "\n~~~ FREEZE RIGHT THERE, YOU'RE BUSTED! YOUR BANK ROBBING DAYS ARE OVER!! ~~~";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // Create new random sequence based on time of day

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loop game until all levels completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "~~~ That's all the cash!! Lets blow this popsicle stand... ~~~\n\n";
    std::cout << "  ~~~ Congratulations, you successfully robbed a bank! ~~~";

    return 0;
}