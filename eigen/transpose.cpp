#include <iostream>
#include <eigen3/Eigen/Dense>

using namespace std;

int main() {
  Eigen::Matrix3d p = Eigen::Matrix3d::Random(3,3);

  cout << "p^T = \n" << p.transpose() << endl;

  // In-place transposition
  p.transposeInPlace();

  cout << "p^T = \n" << p << endl;
}
