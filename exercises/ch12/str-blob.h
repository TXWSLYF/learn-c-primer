#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class StrBlob
{

public:
    typedef vector<string>::size_type size_type;
    // 构造函数声明
    StrBlob();
    // 使得创建对象时可以使用 StrBlob strBlob{"11", "22", "33"} 花括号的形式
    StrBlob(initializer_list<string> il);
    // 常函数
    size_type size() const { return data->size(); };
    bool empty() const { return data->empty(); }
    // 添加和删除元素
    void push_back(const string &t)
    {
        data->push_back(t);
    };
    void pop_back();
    // 元素访问
    string &front();
    string &back();
    // 常函数版本
    string &front() const
    {
        check(0, "front on empty StrBlob");

        // 返回容器内起始元素的引用
        return data->front();
    };
    string &back() const
    {

        check(0, "back on empty StrBlob");

        // 返回容器内末尾元素的引用
        return data->back();
    };

private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};

// 构造函数定义
StrBlob::StrBlob() : data(make_shared<vector<string>>()){};
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il))
{
    cout << "initializer_list<string> il" << endl;
};

void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size())
        throw out_of_range(msg);
}

string &StrBlob::front()
{
    check(0, "front on empty StrBlob");

    // 返回容器内起始元素的引用
    return data->front();
}

string &StrBlob::back()
{
    check(0, "back on empty StrBlob");

    // 返回容器内末尾元素的引用
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");

    // 移除并销毁容器内末尾元素
    data->pop_back();
}
