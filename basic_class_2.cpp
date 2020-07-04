#include <cassert>
#include <stdexcept>

// TODO: Define class Pyramid
class Pyramid {
// public class members
 public:
// constructor
  Pyramid(float length, float width, float height) : \
      length_(length), width_(width), height_(height) {
      Validate();
  }
// accessors
  float Length() const { return length_; }
  float Width() const { return width_; }
  float Height() const { return height_; }
// mutators
  void Length(float length) { length_ = length; Validate(); }
  void Width(float width) { width_ = width; Validate(); }
  void Height(float height) { height_ = height; Validate(); }
// public Volume() function
  float Volume() {
      return length_* width_ * height_ / 3;
  }
// private class members
 private:
  float length_;
  float width_;
  float height_;
  void Validate() {
    if (length_ <= 0 || width_ <= 0  || height_ <= 0) {
        throw std::invalid_argument("negative dimension");
    }
  }
};
// Test
int main() {
  Pyramid pyramid(4, 5, 6);
  assert(pyramid.Length() == 4);
  assert(pyramid.Width() == 5);
  assert(pyramid.Height() == 6);
  assert(pyramid.Volume() == 40);

  bool caught{false};
  try {
    Pyramid invalid(-1, 2, 3);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}
