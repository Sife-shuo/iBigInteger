#include "iBigInteger.cpp"

#include <unistd.h>

#define TEST

int main() {

    std::cout << "+------------------------------------------+" << std::endl;
    std::cout << "|     This is iBigInteger test program     |" << std::endl;
    std::cout << "+------------------------------------------+" << std::endl;
    std::cout << std::endl;
    usleep(100);

    std::cout << "|>Test 1: iBigInteger(string)" << std::endl;
    iBigInteger a("123456789");
    std::cout << "input: 123456789" << std::endl;
    a.printEachNumber();
    std::cout << std::endl;
    usleep(100);

    std::cout << "|>Test 2: iBigInteger(string, int)" << std::endl;
    iBigInteger b("123456789", 14);
    std::cout << "input: 123456789 and 14" << std::endl;
    b.printEachNumber();
    std::cout << std::endl;
    usleep(100);

    std::cout << "|>Test 3: iBigInteger(int)" << std::endl;
    iBigInteger c(123456789);
    std::cout << "input: 123456789" << std::endl;
    c.printEachNumber();
    std::cout << std::endl;
    usleep(100);

    std::cout << "|>Test 4: iBigInteger(long long)" << std::endl;
    iBigInteger d(123456789123456789);
    std::cout << "input: 123456789123456789" << std::endl;
    d.printEachNumber();
    std::cout << std::endl;
    usleep(100);

    std::cout << "|>Test 5: operator+()" << std::endl;
    iBigInteger _5_a("123456789123456789");
    iBigInteger _5_b("123456789123456789");
    iBigInteger _5_c = _5_a + _5_b;
    std::cout << "input: 123456789123456789 and 123456789123456789" << std::endl;
    std::cout << _5_c;
    std::cout << std::endl;
    iBigInteger _5_d("-123456789");
    iBigInteger _5_e = _5_d + _5_a;
    std::cout << "input: -123456789 and 123456789123456789" << std::endl;
    std::cout << _5_e;
    std::cout << std::endl << std::endl;
    usleep(100);

    std::cout << "|>Test 6: operator-()" << std::endl;
    iBigInteger _6_a("123456789123456789");
    iBigInteger _6_b("123456789123456789");
    iBigInteger _6_c = _6_a - _6_b;
    std::cout << "input: 123456789123456789 and 123456789123456789" << std::endl;
    std::cout << _6_c;
    std::cout << std::endl;
    iBigInteger _6_d("-123456789");
    iBigInteger _6_e = _6_d - _6_a;
    std::cout << "input: -123456789 and 123456789123456789" << std::endl;
    std::cout << _6_e;
    std::cout << std::endl << std::endl;
    usleep(100);

    std::cout << "|>Test 7: operator+=()" << std::endl;
    iBigInteger _7_a("123456789123456789");
    iBigInteger _7_b("123456789123456789");
    _7_a += _7_b;
    std::cout << "input: 123456789123456789 and 123456789123456789 (123456789123456789 += 123456789123456789)"
              << std::endl;
    std::cout << _7_a;
    std::cout << std::endl;
    iBigInteger _7_d("-123456789");
    _7_a += _7_d;
    std::cout << "input: 2469135780246913578 and -123456789 (123456789123456789 += (-123456789) )" << std::endl;
    std::cout << _7_a;
    std::cout << std::endl << std::endl;
    usleep(100);

    std::cout << "|>Test 8: operator-=()" << std::endl;
    iBigInteger _8_a("123456789123456789");
    iBigInteger _8_b("123456789123456789");
    _8_a -= _8_b;
    std::cout << "input: 123456789123456789 and 123456789123456789 (123456789123456789 -= 123456789123456789)"
            << std::endl;
    std::cout << _8_a;
    std::cout << std::endl;
    iBigInteger _8_d("-123456789");
    _8_a -= _8_d;
    std::cout << "input: 2469135780246913578 and -123456789 (123456789123456789 -= (-123456789) )" << std::endl;
    std::cout << _8_a;
    std::cout << std::endl << std::endl;
    usleep(100);



    return 0;
}
