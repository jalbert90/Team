#include <iostream>
#include <string>

using namespace std;

int main() {
	const int MAX_NUMBER_OF_PROBLEMS = 1000;
	const int NUMBER_OF_FRIENDS = 3;
	int whoHasSolutions[MAX_NUMBER_OF_PROBLEMS][3];
	int numberOfProblems;
	int numberOfProblemsToBeSolved = 0;

	cin >> numberOfProblems;

	for (int i = 0; i < numberOfProblems; i++) {
		int numberOfFriendsWithSolutions = 0;
		for (int j = 0; j < NUMBER_OF_FRIENDS; j++) {
			cin >> whoHasSolutions[i][j];
			if (whoHasSolutions[i][j] == 1) {
				numberOfFriendsWithSolutions++;
			}
		}
		if (numberOfFriendsWithSolutions >= 2) {
			numberOfProblemsToBeSolved++;
		}
	}
	cout << numberOfProblemsToBeSolved;
	return 0;
}