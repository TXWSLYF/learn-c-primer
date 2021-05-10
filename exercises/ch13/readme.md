## 13.1

拷贝构造函数是类中的一种特殊的构造函数

拷贝构造函数第一个参数是自身类类型的引用，并且任何额外参数都有默认值

```c++
class Foo {
public:
    Foo();              // 默认构造函数
    Foo(const Foo&);    // 拷贝构造函数
}
```

1. 拷贝初始化
2. 将一个对象作为实参传递给一个非引用类型的形参
3. 从一个返回类型为非引用类型的函数返回一个对象
4. 用花括号列表初始化一个数组中的元素或一个聚合类中的成员

## 13.4

```c++
Point global;
Point foo_bar(Point arg) // 1
{
    Point local = arg, *heap = new Point(global); // 2, 3
    *heap = local; // 拷贝赋值运算符
    Point pa[ 4 ] = { local, *heap }; // 4, 5
    return *heap; // 6
}
```

[C++ 拷贝构造函数和赋值运算符](https://www.cnblogs.com/wangguchangqing/p/6141743.html)

## [13.5](13.5.cc)

## 13.6

拷贝赋值运算符是什么？什么时候使用？

拷贝赋值运算符就是在对象赋值的时候使用，控制对象如何赋值的。

## [13.8](13.8.cc)
