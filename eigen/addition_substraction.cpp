#include <iostream>
#include <eigen3/Eigen/Dense>

using namespace std;

int main(){
  Eigen::Matrix3d p;
  Eigen::Matrix3d q;

  Eigen::Vector3d r(1,2,3);
  Eigen::Vector3d s(4,5,6);

  p << 1, 2, 3,
       4, 5, 6,
       7, 8, 9;
  q << 10, 11, 12,
       13, 14, 15,
       16, 17, 18;

  cout << "p+q=\n" << p + q << endl;
  cout << "p-q=\n" << p - q << endl;

  cout << "r+s=\n" << r + s << endl;
  cout << "r-s=\n" << r - s << endl;

}
