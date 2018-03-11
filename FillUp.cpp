#include <iostream>
using namespace std;

int main(){
	int size, total = 0, a[size];
	cout << "Enter size of array: ";
	cin >> size;
	cout << "Enter " << size << " numbers:\n:";
	for (int i = 0; i < size; i++)
		cin >> a[i];
	size--;
	cout << "The last array index used is " << size << endl;

return 0;	
}
