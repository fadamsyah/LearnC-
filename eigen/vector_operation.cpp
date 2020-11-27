#include <iostream>
#include <eigen3/Eigen/Dense>

using namespace std;

int main() {
  Eigen::Vector3d r(10,20,30);
  Eigen::Vector3d s(40,50,60);

  cout << "r . s =\n" << r.dot(s) << endl;
  cout << "r x s =\n" << r.cross(s) << endl;
}
