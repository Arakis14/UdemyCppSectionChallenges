// Section 11
// Challenge 
/*
     Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.
    
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
    
    Finally,  don't forget to use function prototypes!
    
    Good luck -- I know you can do it!
*/

#include <iostream>
#include <vector>

char selection {};

using namespace std;
void printNumbers(std::vector<int> & numbers)
{
            if (numbers.size() == 0)
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto num: numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
}
void addNumber(std::vector<int> & numbers)
{
    int num_to_add {};
    cout << "Enter an integer to add to the list: ";
    cin >> num_to_add;
    numbers.push_back(num_to_add);
    cout << num_to_add << " added" << endl;
}
void displayMean(std::vector<int> & numbers)
{
   if (numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else {
                int total {};
                for (auto num: numbers)
                    total += num;
                cout << "The mean is : " << static_cast<double>(total)/numbers.size() << endl; 
                }               
}
void displaySmallest(std::vector<int> & numbers)
{
    if (numbers.size() == 0) 
                cout << "Unable to determine the smallest - list is empty" << endl;
            else {
                int smallest = numbers.at(0);
                for (auto num: numbers)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
                }  
}
void displayLargest(std::vector<int> & numbers)
{
    if (numbers.size() == 0)
                cout << "Unable to determine largest - list is empty"<< endl;   
            else {
                int largest = numbers.at(0);
                for (auto num: numbers)
                    if (num > largest)
                        largest = num;
                cout << "The largest number is: " << largest << endl;
                }
}

void run (std::vector<int> & numbers)
{
    do
    {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number"<< endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;   
    
        if (selection == 'P' || selection == 'p') 
        {printNumbers(numbers);}
        else if (selection == 'A' || selection == 'a')
        {addNumber(numbers);}
        else if (selection == 'M' || selection == 'm') 
        {displayMean(numbers);}
        else if (selection == 'S' || selection == 's')
        {displaySmallest(numbers);}
        else if (selection == 'L' || selection == 'l')
        {displayLargest(numbers);}
        else if (selection == 'Q' || selection == 'q') 
        {   cout << "Goodbye" << endl;  } 
        else 
        {   cout << "Unknown selection, please try again" << endl;  }

    }   while (selection != 'q' && selection != 'Q');
}


int main() 
{
    std::vector<int> numbers{};
    run(numbers);
    return 0;
}

