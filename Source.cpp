#include<cmath>
#include<vector>
#include<iostream>

using namespace std;
int main()
{
	int x;
	cout << "Enter the x axis: ";
	cin >> x;

	int y;
	cout << "Enter the y axis: ";
	cin >> y;

	int z;
	cout << "Enter the z axis: ";
	cin >> z;

	vector<vector<vector< int >>> matrix(z, vector<vector<int>>(y, vector<int>(x, 0)));
	//vector<vector<vector< int >>> matrix;
	vector<int> flatten(x * y * z);
	cout << "Enter the values" << endl;
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
		{
			for (int k = 0; k < matrix[i][j].size(); k++)
			{
				int val;
				cin >> val;
				matrix[i][j][k] = val;
			}
		}	
	}

	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
		{
			for (int k = 0; k < matrix[i][j].size(); k++)
			{
				int indx;
				indx = (((y * z) * i) + (y * j)) + k;
				flatten[indx] = matrix[i][j][k];
			}
		}
	}

	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
		{
			for (int k = 0; k < matrix[i][j].size(); k++)
			{
				cout << matrix[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	cout << "[";
	for (int i = 0; i < flatten.size(); i++)
	{
		cout << flatten[i] << ",";
	}
	cout << "]" << endl;

}