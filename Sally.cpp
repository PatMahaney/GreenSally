//Sally.cpp
//Patrick Mahaney
//This program asks the user how many the the user wants to see the lyric of the song "Flower" by Moby

#include <iostream>
using namespace std;
// This function prompts the instructions for the user to read
void instructions()
{
	cout << "How many times you want to bring Sally up and Down?:";
	return;
}
// This function takes input from the user by have a value referenced
void getInput(int& ans)
{
	cin >> ans;
}
// This function takes the value referenced and uses it the argument
void lyrics(int ans)
{
	// This loop iterates until the number that was input by the user
	for (int i = 0; i < ans; i++)
	{
		cout << "Green Sally Up\nGreen Sally Down\nLast one squat, gotta tear the ground!\n\n" << endl;
	}
	return;
}
//This function outputs the line after the lyric that repeats
void output()
{
	cout << "Old Miss Lucy's dead and gone\nLeft me here to weep and moan\n";
}
int main()
{
	// integer varible initialized with a value of zero
	int answer = 0;
	instructions();
	getInput(answer);
	lyrics(answer);
	output();
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
