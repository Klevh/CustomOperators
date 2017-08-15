#include "../CustomOperators.hpp"
#include <iostream>
using namespace Custom_operator;
using std::cout;
using std::endl;

auto inc = new_operator([](int i){return i+1;});
auto sum = new_operator([](int i,int j){return i+j;});

int main(){
  cout<< (inc>1) <<endl;
  cout<< (2 <sum> 3) <<endl;

  return 1;
}
