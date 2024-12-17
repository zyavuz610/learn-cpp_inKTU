#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v; // Boş bir vektör
    v.push_back(10); // Vektöre 10 ekle
    v.push_back(20); // Vektöre 20 ekle
    v.push_back(30); // Vektöre 30 ekle

    for (int x : v) cout << x << ", "; // 10 20
    cout << endl;
    v.pop_back(); // Vektörün son elemanını sil
    for (int x : v) cout << x << ", "; // 10
    return 0;
}
