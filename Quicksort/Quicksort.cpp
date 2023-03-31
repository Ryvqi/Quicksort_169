#include <iostream>
using namespace std;

//array of integrers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of movement
int n;
void input() {
	while (true)
	{
		cout << "Masukan panjang elemen array :";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n------------------------" << endl;
	}
}
int main()
{

}
