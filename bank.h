#ifndef BANK_H
#define BANK_H
using namespace std;

class Bank {
public:
	Bank();
	void setallocation(int A[10][10], int& n, int& m);
	void setmaxallocation(int M[10][10], int& n, int& m);
	void setavailable(int& m, int W[1][10]);

	int post_check(int A[][10], int N[][10], int W[1][10], int n, int m,
			int is_safe, int a[]);
	void resource_request(int A[10][10], int N[10][10], int AV[10][10], int pid,
			int m);

private:

	int **A;
	int **M;
	int **N;
	int **W;
	int n, m, pid, ch;
};

#endif
