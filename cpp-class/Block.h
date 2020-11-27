#ifndef BLOCK_H
#define BLOCK_H

namespace shp{
  class Block {
    public:
      Block(double length);
      Block(double length, double width, double height);

      double getVolume();
      double getSurfaceArea();
      void setLength(double length);
      void setWidth(double width);
      void setHeight(double height);

    private:
      double length_;
      double width_;
      double height_;

  };
}

#endif
