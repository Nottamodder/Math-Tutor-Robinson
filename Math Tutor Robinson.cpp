// Math Tutor Robinson.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	/*Write a program that can be used as a math tutor for a young student. The program should
	display two random numbers to be added*/
	float number1, number2;
	std::cout << "what is the first number you want to add? ";
	std::cin >> number1;
	std::cout << "what is the second number you want to add? ";
	std::cin >> number2;
	/*The program should then pause while the student works on the problem. When the student
	is ready to check the answer, he or she can press a key and the program will display the
	correct solution*/
	float number3;
	number3 = number1 + number2;
	std::cout << " " << number1 << "\n";
	std::cout << "+" << number2 << "\n";
	std::cout << "\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Press Enter to see your answer\n";
	std::cin.get();
	std::cout << "Your answer is: " << number3;
	
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
