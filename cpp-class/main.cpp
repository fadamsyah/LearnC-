#include <iostream>
#include "Block.h"

using namespace std;

int main(){
  shp::Block block1(2.);
  shp::Block block2(1., 2., 3.);

  cout << "The first block " << endl;
  cout << "Volume: " << block1.getVolume() << " m3" << endl;
  cout << "Surface Area: " << block1.getSurfaceArea() << " m2" << endl;
  cout << endl;
  cout << "The second block " << endl;
  cout << "Volume: " << block2.getVolume() << " m3" << endl;
  cout << "Surface Area: " << block2.getSurfaceArea() << " m2" << endl;

  return 0;
}
