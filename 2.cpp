#include <iostream>

using namespace std;

class Fraction {
private:
    int nume;  // 分子
    int deno;  // 分母

public:
    // 构造函数
    Fraction(int numerator = 0, int denominator = 1) {
        if (denominator == 0) {
            cout << "Error: Denominator cannot be zero!" << endl;
            exit(1);
        }
        nume = numerator;
        deno = denominator;
    }

    // 析构函数
    ~Fraction() {}

    // 按分数加法规则计算两个分数的和，并返回分数和
    Fraction Add(const Fraction& fraction) const {
        int numerator = nume * fraction.deno + fraction.nume * deno;
        int denominator = deno * fraction.deno;
        return Fraction(numerator, denominator);
    }

    // 按分数减法规则计算两个分数的差，并返回分数差
    Fraction Sub(const Fraction& fraction) const {
        int numerator = nume * fraction.deno - fraction.nume * deno;
        int denominator = deno * fraction.deno;
        return Fraction(numerator, denominator);
    }

    // 按分数乘法规则计算两个分数的积，并返回分数积
    Fraction Mul(const Fraction& fraction) const {
        int numerator = nume * fraction.nume;
        int denominator = deno * fraction.deno;
        return Fraction(numerator, denominator);
    }

    // 按分数除法规则计算两个分数的商，并返回分数商
    Fraction Div(const Fraction& fraction) const {
        if (fraction.nume == 0) {
            cout << "Error: Cannot divide by zero!" << endl;
            exit(1);
        }
        int numerator = nume * fraction.deno;
        int denominator = deno * fraction.nume;
        return Fraction(numerator, denominator);
    }

    // 比较两个分数是否相等，返回逻辑值
    bool Isequal(const Fraction& fraction) const {
        return (nume * fraction.deno == fraction.nume * deno);
    }

    // 比较两个分数是否大于，返回逻辑值
    bool Greater(const Fraction& fraction) const {
        return (nume * fraction.deno > fraction.nume * deno);
    }

    // 以"分子/分母"形式显示分数对象
    void Disp() const {
        cout << nume << "/" << deno << endl;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    Fraction sum = f1.Add(f2);
    Fraction diff = f1.Sub(f2);
    Fraction product = f1.Mul(f2);
    Fraction quotient = f1.Div(f2);

    bool isEqual = f1.Isequal(f2);
    bool isGreater = f1.Greater(f2);

    cout << "f1: ";
    f1.Disp();
    cout << "f2: ";
    f2.Disp();

    cout << "Sum: ";
    sum.Disp();
    cout << "Difference: ";
    diff.Disp();
    cout << "Product: ";
    product.Disp();
    cout << "Quotient: ";
    quotient.Disp();

    cout << "f1 is equal to f2: " << (isEqual ? "true" : "false") << endl;
    cout << "f1 is greater than f2: " << (isGreater ? "true" : "false") << endl;

    return 0;
}