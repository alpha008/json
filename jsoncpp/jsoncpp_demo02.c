#include <string>
#include <jsoncpp/json/json.h>
#include <iostream>
 
using namespace std;
#if 0
json
jsoncpp
{
        "array" : 
        [
                {
                        "cpp" : "jsoncpp",
                        "java" : "jsoninjava",
                        "php" : "support"
                }
        ],
        "name" : "json"
}
#endif
void readJson() {
	std::string strValue = "{\"name\":\"json\",\"array\":[{\"java\":\"jsoninjava\"},{\"cpp\":\"jsoncpp\"},{\"php\":\"support\"}]}";
	Json::Reader reader;
	Json::Value value;
	if (reader.parse(strValue, value))// 将字符串转换为json格式放到value对象中
	{
		std::string out = value["name"].asString();// 转换为c++字符串
		std::cout << out << std::endl;
		const Json::Value arrayObj = value["array"];//[] 为一个数组结构
		for (unsigned int i = 0; i < arrayObj.size(); i++)
		{// 遍历json数组
		    std::cout << i << " 111" << std::endl;
			if (!arrayObj[i].isMember("cpp"))
			{// 如果不是cpp那么就继续执行
				std::cout << i << " " << arrayObj[i].isMember("cpp") << std::endl;
				continue; // 判断成员是否为cpp
			} 			
			out = arrayObj[i]["cpp"].asString(); // 转换为c++格式字符串
			std::cout << out;  // 如果是那么打印其值
			if (i != (arrayObj.size() - 1))
				std::cout << std::endl;
		}
	}
}

void writeJson() {
 
	Json::Value root;
	Json::Value arrayObj;
	Json::Value item;
 
	item["cpp"] = "jsoncpp";
	item["java"] = "jsoninjava";
	item["php"] = "support";
	arrayObj.append(item);// 将数组结构挂靠在数组结构中
	root["name"] = "json";
	root["array"] = arrayObj;// 将数组挂接在array下面

	std::string out = root.toStyledString();// 将root结点下字符串格式输出
	std::cout << out << std::endl;
}

int main(int argc, char** argv) {
	//readJson();
	writeJson();
	return 0;
}