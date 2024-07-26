#include <iostream>
int pow(int a, int b);
double determinant(double b[100][100], int size);
using namespace std;
int a,n,m,t,r,i,j,k;

int main() {
	const int rowsize = 100;
	const int colsize = 100;
	double A[rowsize][colsize];
	double B[rowsize][colsize];
	while (1) {
		cout <<"**************************"<<'\n'<<"1-get matrix A" << '\n' << "2-get matrix B" << '\n' << "3-transfer A to B" << '\n' << "4-transfer B to A" << '\n' << "5-A=A*B" << '\n' << "6-A=A+B" << '\n' << "7-A=A/B" << '\n' << "8-A=A-B" << '\n' << "9-A=a*A" << '\n' << "10-determinant A" << '\n' << "11-determinant B" << '\n' << "12-print A" << '\n' << "13-print B" << '\n' << "14-End" << '\n' << "Please enter a number:";
		cin >> a;
		if (a == 1) {//matrix A
			cout << "Please enter your matrix size" << '\n' << "Row:";
			cin >> n;
			cout << "Column:";
			cin >> m;
			cout << endl;
			cout << "Please enter matrix A" << '\n';
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					cout << "A[" << i << "]" << "[" << j << "]=";
					cin >> A[i][j];
				}

			}
			cout << endl;
		}
		else if (a == 2) {//matrix B
			cout << "Please enter your matrix size" << '\n' << "Row:";
			cin >> t;
			cout << "Column:";
			cin >> r;
			cout << endl;
			cout << "Please enter matrix B" << '\n';
			for (int i = 0; i < t; i++) {
				for (int j = 0; j < r; j++) {
					cout << "B[" << i << "]" << "[" << j << "]=";
					cin >> B[i][j];
				}

			}
			cout << endl;
		}
		else if (a == 3) {//transfer A to B
			for (i = 0; i < n; i++) {
				for (j = 0; j < m; j++) {
					B[i][j] = A[i][j];
				}
			}
			r = n;
			t = m;
		}
		else if (a == 4) {//transfer B to A
			for (i = 0; i < r; i++) {
				for (j = 0; j < t; j++) {
					A[i][j] = B[i][j];
				}
			}
			n = r;
			m = t;
		}
		else if (a == 5) {//A*B
			if (m == t) {
				double C[100][100];
				for (k = 0; k < n; k++) {
					for (i = 0; i < r; i++) {
						double sum = 0;
						for (j = 0; j < m; j++) {
							sum += A[k][j] * B[j][i];
						}
						C[k][i] = sum;
					}
				}
				for (i = 0; i < n; i++) {
					for (j = 0; j < r; j++) {
						A[i][j] = C[i][j];
					}
				}
			}
			else {
				cout << "multiplication is imposible";
			}
		}
		else if (a == 6) {//A+B
			if (t == n && r == m) {
				for (i = 0; i < t; i++) {
					for (j = 0; j < r; j++) {
						A[i][j] = A[i][j] + B[i][j];
					}
				}
			}
			else {
				cout << "Addition is impossible";
			}
		}
		else if (a == 7) {//A/B
			//hamsaze
			if (t == r) {
				double khad[rowsize][colsize];
				double hamsaze[rowsize][colsize];
			for (int w = 0; w < t; w++) {
				for (int p = 0; p < t; p++) {
					int h = 0, k = 0;
					for (i = 0; i < t; i++) {
						if (i == w) continue;
						for (j = 0; j < t; j++) {
							if (j == p) continue;
							khad[h][k] = B[i][j];
							k++;
							if (k == t - 1) {
								h++;
								k = 0;
							}

						}
					}
					int q = w + p;
					int v = pow(-1, q);
					double z = determinant(khad, t - 1);
					hamsaze[w][p] = v * z;
				}
			}

			//elhagi
			for (i = 0; i < t; i++) {
				for (j = i; j < t; j++) {
					double temp;
					temp = hamsaze[i][j];
					hamsaze[i][j] = hamsaze[j][i];
					hamsaze[j][i] = temp;
				}
			}
			//varoon
			double varoon_B[100][100];
			double q = determinant(B, t);
			if (q != 0) {
				double u = 1 / q;
			for (i = 0; i < t; i++) {
				for (j = 0; j < t; j++) {
					varoon_B[i][j] = u * hamsaze[i][j];
				}
			}
			//Division
			if (m == t) {
				double C[100][100];
				for (k = 0; k < n; k++) {
					for (i = 0; i < r; i++) {
						double sum = 0;
						for (j = 0; j < m; j++) {
							sum += A[k][j] * varoon_B[j][i];
						}
						C[k][i] = sum;
					}
				}
				for (i = 0; i < n; i++) {
					for (j = 0; j < r; j++) {
						A[i][j] = C[i][j];
					}
				}
			}
			else {
				cout << "Division is imposible"<<endl;
			}
			}
			else {
				cout << "Division is impossible"<<endl;
			}
			}
			else {
				cout << "Division is impossible" << endl;
			}
		}
		else if (a == 8) {//A-B
			if (t == n && r == m) {
				for (i = 0; i < t; i++) {
					for (j = 0; j < r; j++) {
						A[i][j] = A[i][j] - B[i][j];
					}
				}
			}
			else {
				cout << "Submission is impossible";
			}
		}
		else if (a == 9) {//a*A
			int v;
			cout << "Please enter a number:";
			cin >> v;
			for (i = 0; i < n; i++) {
				for (j = 0; j < m; j++) {
					A[i][j] = v * A[i][j];
				}
			}
		}
		else if (a == 10) {//determinant A
			if (n == m) {
				cout << determinant(A, n)<<'\n';
			}
			else {
				cout << "impossible"<<endl;
			}
		}
		else if (a == 11) {//determinant B
			if (t == r) {
				cout << determinant(B, t)<<'\n';
			}
			else {
				cout << "impossible"<<endl;
			}
		}
		else if (a == 12) {//print A
		cout << "A="<<'\n';
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				cout << A[i][j] << '\t';
			}
			cout << '\n';
		}
		}
		else if (a == 13) {//print B
		cout << "B="<<'\n';
		for (i = 0; i < t; i++) {
			for (j = 0; j < r; j++) {
				cout << B[i][j] << '\t';
			}
			cout << '\n';
		}
		}
		else if (a == 14) {
		break;
		}
		else {
		cout << "Please choose a number between 1 to 14"<<endl;
		}
	}
	system("pause");
	return 0;
}
double determinant(double b[100][100], int size) {
	int i, j;
	double	sum = 0;
	double c[100][100];
	if (size == 1) {
		sum = b[0][0];
	}
	else if (size == 2)
	{
		sum = b[0][0] * b[1][1] - b[0][1] * b[1][0];
		return sum;
	}
	for (int p = 0; p < size; p++)
	{
		int h = 0, k = 0;
		for (i = 1; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j == p)
					continue;
				c[h][k] = b[i][j];
				k++;
				if (k == size - 1)
				{
					h++;
					k = 0;
				}

			}
		}

		sum = sum + b[0][p] * pow(-1, p) * determinant(c, size - 1);
	}
	return sum;
}

int pow(int a, int b) {
	int mul = 1;
	for (int i = 0; i < b; i++) {
		mul *= a;
	}
	return mul;
}
