#include <iostream>
#include <eigen3/Eigen/Dense>

using namespace std;

int main(){
  Eigen::Matrix3d p;
  p << 1, 2, 3,
       4, 5, 6,
       7, 8, 9;

  cout << "p.sum(): " << p.sum() << endl;
  cout << "p.prod(): " << p.prod() << endl;
  cout << "p.mean(): " << p.mean() << endl;
  cout << "p.minCoeff(): " << p.minCoeff() << endl;
  cout << "p.maxCoeff(): " << p.maxCoeff() << endl;
  cout << "p.trace(): " << p.trace() << endl;

}
