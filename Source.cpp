//program that returns sum of first N terms of sequence.

#include "c:\Users\james\Desktop\migrate\std_lib_facilities.h"

int main()
{
	vector<int> sequence;
	int n = 0;
	int sum = 0;

	cout << "Please enter the number of values you want to sum.\n";
	cin >> n;

	cout << "Please enter the numbers in the sequence, followed by the X key to terminate the sequence.\n";
	for (int in = 0; cin >> in;) { //while cin accepts input...
		sequence.push_back(in);
	}

	if (n > (sequence.size())) error("n is larger than total numbers in sequence!\n");
	
	for (int i = 0; i < n; i++) {
		sum += sequence[i];
	}

	cout << sum << "\n";
	keep_window_open();
}