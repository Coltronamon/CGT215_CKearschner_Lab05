// CGT215_CKearschner_Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>


std::vector<char> cypher = { 'V', 'F', 'X', 'B', 'L' ,'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };

char translate(char C)
{
    if (C >= 65 && C <= 90)
    {
        return cypher[C - 65];
    }
   
    else if (C >= 97 && C <= 122)
    {
        char upperCaseLetter = C - 32;

        char upperCaseCode = cypher[upperCaseLetter - 65];

        return upperCaseCode + 32;
    }

    else 
    {
        return C;
    }
}


int main()
{
    std::string text;

    std::cout << "Input text to cypher: ";
    getline(std::cin, text);

    for (char& C : text)
    {
        C = translate(C);
    }

    std::cout << "Encoded Message: " << text << "..." << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
