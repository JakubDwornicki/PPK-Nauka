

#include <iostream>


using namespace std;



int main()
{
	constexpr int num_rows = 5;
	constexpr int num_cols = 10;




	for (int row = 0; row < num_rows; row += 1)
	{
		for (int col = 0; col < num_cols; col += 1)
		{
			cout << "#";
		}
		cout << endl;
	}

}

