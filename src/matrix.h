#ifndef NODE_OR_TOOLS_MATRIX_F83F49233E85_H
#define NODE_OR_TOOLS_MATRIX_F83F49233E85_H

#include <cstdint>
#include <vector>

template <typename T> class Matrix {
  static_assert(std::is_arithmetic<T>::value, "Matrix<T> requires T to be integral or floating point");

public:
  Matrix() = default;
  Matrix(int n_) : n{n_} { data.resize(n * n); }

  int dim() const { return n; }
  int size() const { return dim() * dim(); }

  T& at(int x, int y) { return data.at(y * n + x); }
  const T& at(int x, int y) const { return data.at(y * n + x); }

private:
  int n;
  std::vector<T> data;
};

#endif
