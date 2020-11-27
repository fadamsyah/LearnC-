#include <iostream>
#include <eigen3/Eigen/Dense>

using namespace std;

int main() {
  Eigen::MatrixXd m(3,3);
  m << 1, 2, 3,
       4, 5, 6,
       7, 8, 9;

  cout << m << endl;
}
