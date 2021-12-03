#include<iostream> 
using namespace std;

int main()
{
	int k, i = 1, sum_k = 0, number;

	cout << "Enter the amount of integers to sum = ";
	cin >> k;

	while (1) // loop until the input is correct
	{
		if (cin.fail()) // if input incorrect
		{
			cin.clear(); // put us back in 'normal' operation mode
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove the bad input
			cout << "Wrong input, please try again: "; // promt
			cin >> k; 
		}
		else // if input is correct
		{
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove the bad input
			break; // exit loop
		}
	}

	do {
		if (k == 0) // if statement, so cycle will break if user inputs zero as the k value
			break;

		cout << "Enter integer nr. " << i << ": ";
		cin >> number;
		// the same actions as for k
		while (1)
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Wrong input, please try again: ";
				cin >> number;
			}
			else
			{
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break;
			}
		}
		sum_k += number;
		i++;
	} while (i <= k);

	cout << "The total sum of " << k << " integers is: " << sum_k;
	return 0;
}

