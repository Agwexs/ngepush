#include <iostream>

class Operator {
  friend std::ostream& operator<<(std::ostream&, const Operator&);
  friend std::istream& operator>>(std::istream&, Operator&);
public:
  long faktorial();
  long faktorial(int);
private:
  int n;
  long hasil;
};

long Operator::faktorial() {
  long fak = 1;
  for (int i = 1; i <= n; i++)
    fak = fak * i;
  return fak;
}

long Operator::faktorial(int n) {
  if (n == 0 || n == 1)
    return 1;
  else
    return (n * faktorial(n - 1));
}

std::ostream& operator<<(std::ostream& os, const Operator& op) {
  os << "Hasil faktorial dari " << op.n << " adalah " << op.hasil;
  return os;
}

std::istream& operator>>(std::istream& is, Operator& op) {
  std::cout << "Masukkan nilai n: ";
  is >> op.n;
  op.hasil = op.faktorial(op.n);
  return is;
}

int main() {
  Operator op;
  std::cin >> op;
  std::cout << op << std::endl;
  return 0;
}

