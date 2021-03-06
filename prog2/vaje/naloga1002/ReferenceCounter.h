#ifndef REFERENCECOUNTER_H
#define REFERENCECOUNTER_H

class ReferenceCounter {
public:
  static int NoOfEqualExpressions;
  unsigned int count;
  ReferenceCounter() : count(0) {}
  ReferenceCounter operator++(int dummy) {
    count++;
    return *this;
  }
  ReferenceCounter &operator--() {
    --count;
    return *this;
  }
};
#endif
