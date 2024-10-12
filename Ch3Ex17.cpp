/*
Program File Name: Ch3Ex17
Programmer: Josh Richards
Date: October 11, 2024
Requirements:

Write a program that can be used as a math tutor for a young student.
The program should display two random numbers to be added. 
The program should then pause while the student works on the problem.
When the student is ready to check the answer, he or she can press a key 
and the program will display the correct solution.

Once yoy have coded this and placed your main branch in GitHub, create a
second branch that revises your code so that before the answer is displayed
the user is allowed to enter an answer. 
Then display the correct answer and tell the student either "You are correct"
or "Your answer is not correct".


*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(0)));

    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;

    cout << "Math Tutor" << endl;
    cout << "Add the following two numbers: " << endl;
    cout << num1 << " + " << num2 << endl;

    int studentAnswer;
    cout << "Enter your answer: ";
    cin >> studentAnswer;

    int correctAnswer = num1 + num2;

    cout << "The correct answer is: " << correctAnswer << endl;

    if (studentAnswer == correctAnswer) {
        cout << "You are correct!" << endl;
    }
    else {
        cout << "Your answer is not correct." << endl;
    }


    return 0;
}


