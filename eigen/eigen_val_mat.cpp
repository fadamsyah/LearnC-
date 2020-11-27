#include <iostream>
#include <eigen3/Eigen/Dense>

using namespace std;

int main() {
  Eigen::Matrix<double, 2, 2> A;
  A << 0, 2,
       1, 0;

  Eigen::EigenSolver<Eigen::Matrix<double, 2, 2>> s(A);
  cout << "Matrix A: \n" << A << endl;
  cout << "Eigenvalues: \n" << s.eigenvalues() << endl;
  cout << "Eigenvectors: \n" << s.eigenvectors() << endl;
}
