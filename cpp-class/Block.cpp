#include "Block.h"

namespace shp{
  Block::Block(double length){
    length_ = length;
    width_ = length;
    height_ = length;
  }

  Block::Block(double length, double width, double height){
    length_ = length;
    width_ = width;
    height_ = height;
  }

  double Block::getVolume(){
    return length_ * width_ * height_;
  }

  double Block::getSurfaceArea(){
    return 2. * (length_*width_ + length_*height_ + width_*height_);
  }

  void Block::setLength(double length){
    length_ = length;
  }

  void Block::setWidth(double width){
    width_ = width;
  }

  void Block::setHeight(double height){
    height_ = height;
  }
}
