#ifndef _Custom_Operator_KLEVH_
#define _Custom_Operator_KLEVH_

namespace Custom_operator{
  template <class Function>
  struct operator_lhs{
    Function f;
  };
    
  template <class Function,class T>
  struct operator_rhs{
    Function f;
    T value;
  };
    
  template <class Function>
  const operator_lhs<Function> new_operator(Function f){
    return {f};
  }
    
  template <class Function,class T>
  operator_rhs<Function,T> operator<(const T& value,const operator_lhs<Function>& lhs){
    return {lhs.f,value};
  }
    
  template <class Function,class T, class U>
  auto operator>(const operator_rhs<Function, T>& rhs,const U& value){
    return rhs.f(rhs.value,value);
  }
    
  template <class Function,class T>
  auto operator>(const operator_lhs<Function>& lhs,T value){
    return lhs.f(value);
  }
}

#endif
