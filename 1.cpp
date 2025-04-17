#include <iostream>  
  
class Rectangle {  
private:  
    double length, width, area;  
  
public:  
    // 构造函数  
    Rectangle(double l, double w) {  
        length = l;  
        width = w;  
        area = length * w;  
    }  
  
    // 复制构造函数  
    Rectangle(const Rectangle& rect) {  
        length = rect.length;  
        width = rect.width;  
        area = rect.area;  
    }  
  
    // 析构函数  
    ~Rectangle() {  
        std::cout << "调用析构函数" << std::endl;  
    }  
  
    // 改变矩形的长、宽，并计算面积  
    void change(double l, double w) {  
        length = l;  
        width = w;  
        area = length * w;  
    }  
  
    // 显示Rectangle对象数据  
    void showpara() {  
        std::cout << "长: " << length << ", 宽: " << width << ", 面积: " << area << std::endl;  
    }  
};  
  
int main() {  
    // 建立Rectangle对象  
    Rectangle rect1(5.0, 3.0);  
    Rectangle rect2 = rect1; // 使用复制构造函数  
  
    // 调用各函数  
    rect1.showpara(); // 显示初始数据  
    rect1.change(7.0, 4.0); // 改变长和宽，并计算新的面积  
    rect1.showpara(); // 显示修改后的数据  
    return 0;  
}