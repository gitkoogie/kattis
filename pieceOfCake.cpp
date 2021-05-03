#include <iostream>

int main() {
    int n=0, h=0, v=0;

    std::cin >> n >> h >> v;

    if (n - h > n / 2){
      h = n - h;
    }

    if (n - v > n / 2){
      v = n - v;
    }
    std::cout << v*h*4 << std::endl;

    return 0;
}
