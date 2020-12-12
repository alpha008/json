#include <iostream>
#include <string>
#include <jsoncpp/json/json.h>
int main()
{
    std::cout << "Hello World!" << std::endl;
    Json::Value root; // 创建一个json对象
    Json::FastWriter fast; // fastwrite 序列化输出
    root["ModuleType"] = Json::Value(1);
    root["ModuleCode"] = Json::Value("China");
    std::cout<<fast.write(root)<<std::endl;
    std::cout <<"------------------"<< std::endl;
    Json::Value sub;
    sub["version"] = Json::Value("1.0");
    sub["city"] = Json::Value(root); // 将root结点挂接在city结构下面
    fast.write(sub);
    std::cout<<sub.toStyledString()<<std::endl;
    // 格式化输出
    return 0;
}

