#include <iostream>
using namespace std;
#define N 3
#define  BOOM 6
int sevenBoom(int A[N][N]);

int main()
{
	int A[N][N] = { {1,2,3},{4,5,6},{7,8,9} };
	cout << sevenBoom(A)<<endl;
	for (int i = 0; i < N ; i++)
	{
		for (int j = 0; j < N ; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
}


int sevenBoom(int A[N][N])
{

	int seven = 0, stop = 0;
	int b;
	while (N * N - 1 > stop)
	{
		for (int i = 0; i < N ; i++)
		{
			for (int j = 0; j < N ; j++)
			{
				if (seven == BOOM && A[i][j] != -1)
				{
					A[i][j] = -1;
					stop++;
					seven = 0;
				}
				else
				{
					if (A[i][j] != -1)
					{
						seven++;
					}
					

				}



			}

		}

	}

	for (int i = 0; i < N ; i++)
	{
		for (int j = 0; j < N ; j++)
		{
			if (A[i][j] != -1)
			{
				return A[i][j];
			}
		}
	}

}