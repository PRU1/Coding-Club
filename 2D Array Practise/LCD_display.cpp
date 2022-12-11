#include<iostream>
#include<string>
using namespace std;

void full_row(int size) {
	cout << " ";
	for (int i = 0; i < size; ++i) {
		cout << "-";
	}
	cout << " ";
}
void empty_row(int size) {
	for (int i = 0; i < size+2; ++i) {
		cout << " ";
	}
}
void size_spaces(int size) {
	for (int i = 0; i < size; ++i) {
		cout << " ";
	}
}
void ooI(string num, int size) {
	size_spaces(size + 1);
	cout << "|";
}
void IooI(string num, int size) {
	cout << "|";
	size_spaces(size);
	cout << "|";
}
void Ioo(string num, int size) {
	cout << "|";
	size_spaces(size + 1);
}
void one(string num, int size, int max_rows, int max_cols) {
	for (int j = 0; j < num.size(); ++j) { // iterate through every digit in the number
		if (num[j] == 'O')
			full_row(size);
		else if (num[j] == '1')
			empty_row(size);
		else if (num[j] == '2')
			full_row(size);
		else if (num[j] == '3')
			full_row(size);
		else if (num[j] == '4')
			empty_row(size);
		else if (num[j] == '5')
			full_row(size);
		else if (num[j] == '6')
			full_row(size);
		else if (num[j] == '7')
			full_row(size);
		else if (num[j] == '8')
			full_row(size);
		else if (num[j] == '9')
			full_row(size);
		cout << " "; // Space for next digit
	}
}
void two(string num, int size) {
	for (int i = 0; i < size; ++i) {
	for (int j = 0; j < num.size(); ++j) { // iterate through every digit in the number
		if (num[j] == 'O') {
			IooI(num, size);
		}
		else if (num[j] == '1') {
			ooI(num, size);
		}
		else if (num[j] == '2') {
			ooI(num, size);
		}
		else if (num[j] == '3') {
			ooI(num, size);
		}
		else if (num[j] == '4') {
			IooI(num, size);
		}
		else if (num[j] == '5') {
			Ioo(num, size);
		}
		else if (num[j] == '6') {
			Ioo(num, size);
		}
		else if (num[j] == '7') {
			ooI(num, size);
		}
		else if (num[j] == '8') {
			IooI(num, size);
		}
		else if (num[j] == '9') {
			IooI(num, size);
		}
		cout << " "; // make space for next digit
	}
	cout << "\n"; // get ready for next row
	}

}
void three(string num, int size) {
	for (int j = 0; j < num.size(); ++j) { // iterate through every digit in the number
		if (num[j] == 'O')
			empty_row(size);
		else if (num[j] == '1')
			empty_row(size);
		else if (num[j] == '2')
			full_row(size);
		else if (num[j] == '3')
			full_row(size);
		else if (num[j] == '4')
			full_row(size);
		else if (num[j] == '5') 
			full_row(size);
		else if (num[j] == '6')
			full_row(size);
		else if (num[j] == '7')
			empty_row(size);
		else if (num[j] == '8')
			full_row(size);
		else if (num[j] == '9') {
			full_row(size);
		}
		cout << " "; // Space for next digit
	}
}
void four(string num, int size) {
	for (int i = 0; i < size; ++i) {
	for (int j = 0; j < num.size(); ++j) { // iterate through every digit in the number
		if (num[j] == 'O') {
			IooI(num, size);
		}
		else if (num[j] == '1') {
			ooI(num, size);
		}
		else if (num[j] == '2') {
			Ioo(num, size);
		}
		else if (num[j] == '3') {
			ooI(num, size);
		}
		else if (num[j] == '4') {
			ooI(num, size);
		}
		else if (num[j] == '5') {
			ooI(num, size);
		}
		else if (num[j] == '6') {
			IooI(num, size);
		}
		else if (num[j] == '7') {
			ooI(num, size);
		}
		else if (num[j] == '8') {
			IooI(num, size);
		}
		else if (num[j] == '9') {
			ooI(num, size);
		}
		cout << " "; // make space for next digit
	}
	cout << "\n"; // get ready for next row
	}
}
void five(string num, int size) {
	for (int j = 0; j < num.size(); ++j) { // iterate through every digit in the number
		if (num[j] == 'O')
			full_row(size);
		else if (num[j] == '1')
			empty_row(size);
		else if (num[j] == '2')
			full_row(size);
		else if (num[j] == '3')
			full_row(size);
		else if (num[j] == '4')
			empty_row(size);
		else if (num[j] == '5') 
			full_row(size);
		else if (num[j] == '6')
			full_row(size);
		else if (num[j] == '7')
			empty_row(size);
		else if (num[j] == '8')
			full_row(size);
		else if (num[j] == '9') {
			full_row(size);
		}
		cout << " "; // Space for next digit
	}
}
int main() {
	// take input
	int size; // number of -
	string num; // input number to display
	do {
		cin >> size >> num;
		// intialize variables containing the max rows and cols in a number
		int max_rows = 2 * size + 3;
		int max_cols = size + 2;
		// there are 5 segments of each number
		for (int i = 0; i < 5; ++i) {
			if (i == 0) { // different for each segment
				one(num, size, max_rows, max_cols);
				cout << "\n"; // go to next line for next digit segment
			}
			else if (i == 1) {
				two(num, size);
			}
			else if (i == 2) {
				three(num, size);
				cout << "\n"; // go to next line for next digit segment
			}
			else if (i == 3) {
				four(num, size);
			}
			else if (i == 4) {
				five(num, size);
				cout << "\n";
			}
		}
	} while ((size != 0) && (num != "0"));
	return 0;
}
