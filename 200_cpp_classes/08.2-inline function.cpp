#include <iostream>
 
using namespace std;
/*
    - inline fonksiyonlar, gelenksel fonksiyon çağır, geri döndür mekanizması ile çalışmayan fonksiyonlardır.
    - derleyici bir inline fonksiyon çağrısı her gördüğünde oraya inline fonk. kodunu kopyalar, böylece fonk. daha hızlı çalışır
    . değişkenler için "#define" ne ise fonksiyonlar için de "inline" odur
    . "inline" anahtar kelimesi ile tanımlanır.
    . "inline" fonksiyonların dezavantajı, fonksiyonlar çok büyük olduğunda programın da çok büyük olmasına sebep olmasıdır.
    . "inline fonksiyon" parametreli makroya benzer,
    . makroya göre 2 avantajı vardır
      1. kısa fonksiyonlar inline yapılır, böylece satır içi genişletilerek daha yapısal bir program yazmış oluruz
      2. derleyici inline fonksiyonları daha iyi optimize edebilir.
    . inline fonksiyonlar kullanılmadan önce tanımlanmak zorundadır.

*/

inline int Max(int x, int y) {
   return (x > y)? x : y;
}

//---------------------------------------------------------
<<<<<<< Updated upstream
class Operation { 
=======
class operation { 
>>>>>>> Stashed changes
    int a,b,add,sub,mul; 
    float div; 
public: 
    void get(); 
    void sum(); 
    void difference(); 
    void product(); 
    void division(); 
}; 
inline void Operation :: get() { 
    cout << "Enter first value:"; 
    cin >> a; 
    cout << "Enter second value:"; 
    cin >> b; 
} 
  
inline void Operation :: sum() { 
    add = a+b; 
    cout << "Addition of two numbers: " << a+b << "\n"; 
} 
  
inline void Operation :: difference() { 
    sub = a-b; 
    cout << "Difference of two numbers: " << a-b << "\n"; 
} 
  
inline void Operation :: product() { 
    mul = a*b; 
    cout << "Product of two numbers: " << a*b << "\n"; 
} 
  
inline void Operation ::division() { 
    div=a/b; 
    cout<<"Division of two numbers: "<<a/b<<"\n" ; 
} 

//---------------------------------------------------------

int main() {
   cout << "Max (20,10): " << Max(20,10) << endl;
   cout << "Max (0,200): " << Max(0,200) << endl;
   cout << "Max (100,1010): " << Max(100,1010) << endl;

   //-----------------------------------------------------------
/*   
  cout << "Program using inline function\n"; 
    Operation s; 
    s.get(); 
    s.sum(); 
    s.difference(); 
    s.product(); 
    s.division(); 

*/   
   return 0;
}
