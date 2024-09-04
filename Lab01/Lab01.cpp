/*
Jonathan Truong
CPSC 121-19
01/29/2020
Lab01 week 2 - 2D Array (using 2D arrays to find students' scores)
*/

#include <iostream>
using namespace std;
const int  NUMSTUDENTS = 3;
const int  NUMTESTS = 3;
int main()
{
	int scores[NUMSTUDENTS][NUMTESTS]; //sets an array of scores to 3 rows and 3 columns
	int score;
	for (int e = 0; e < 3; e++) {
		for (int t = 0; t < 3; t++) {
			cout << "Enter student" << e + 1 << " \'s Exam " << t + 1 << " score." << endl;
			cin >> scores[e][t];
		}
	}
	//This loop allows for scores to be entered by the student and to be stored in the array
	for (int e = 0; e < 3; e++) {
		for (int t = 0; t < 3; t++) {
			cout << "Student " << e + 1 << "\'s Exam " << t + 1 << " score." << scores[e][t] << endl;
		}
		cout << endl;
	}
	//Prints out all of the student's exam scores and loops for all the students
	float average = 0;
	float sum = 0;
	for (int e = 0; e < 3; e++) {
		cout << "The average score for student " << e + 1 << " is ";
		for (int t = 0; t < 3; t++) {
			sum += scores[e][t];
			//This finds the sum of each student's exam scores and store them into the sum variable
		}
		average = sum / NUMTESTS;
		cout << average << endl;
		sum = 0;
	}
	//Allows the student to change the exam score for any of the three exams
	char changes;
	int student;
	int exam;
	int newScore;
	cout << "Would you like to update an exam score Y/N?" << endl;
	cin >> changes;

	while (changes == 'Y') {
		cout << "Enter a student's number (1-3): " << endl;
		cin >> student;
		cout << "Enter an exam number (1-3): " << endl;
		cin >> exam;
		cout << "Enter a new value for student " << student << "\'s Exam" << exam << " :" << endl;
		cin >> newScore;
		int stuPlacement = student - 1;
		int exPlacement = exam - 1;
		scores[stuPlacement][exPlacement] = newScore;
		cout << "Would you like to update an exam score Y/N?" << endl;
		cin >> changes;
	}
	for (int e = 0; e < 3; e++) {
		cout << "The average score for student" << e + 1 << " is ";
		for (int t = 0; t < 3; t++) {
			sum += scores[e][t];
		}
		average = sum / 3;
		cout << average << endl;
		sum = 0;
	}
	//This only runs if changes is equal to Y

	//This while loop allows for modifications to be made to a student's exam score depending on the choice the user makes
	//Repeats until there are no changes left to be made to the scores
	/*
	Enter Student1's Exam1 score.
78
	Enter Student1's Exam2 score.
74
	Enter Student1's Exam3 score.
88
	Enter Student2's Exam1 score.
90
	Enter Student2's Exam2 score.
100
	Enter Student2's Exam3 score.
65
	Enter Student3's Exam1 score.
40
	Enter Student3's Exam2 score.
10
	Enter Student3's Exam3 score.
60

Student1's Exam 1 score: 78
Student1's Exam 2 score: 74
Student1's Exam 3 score: 88

Student2's Exam 1 score: 90
Student2's Exam 2 score: 100
Student2's Exam 3 score: 65

Student3's Exam 1 score: 40
Student3's Exam 2 score: 10
Student3's Exam 3 score: 60

The Average Score for Student1 is 80
The Average Score for Student2 is 85
The Average Score for Student3 is 36.6667
Would you like to update an exam score Y/N?
Y
Enter a student's number (1-3):
1
Enter an exam number (1-3):
2
Enter a new score for Student1's Exam 2:
85
Student1's Exam 2 score is: 85
Would you like to update an exam score Y/N?
N
The average score for student1 is 83.6667
The average score for student2 is 85
The average score for student3 is 36.6667

	*/
}