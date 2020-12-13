下载地址 https://github.com/leethomason/tinyxml2
使用 git 下载
（1） 下载 tinyxml2
git clone https://github.com/leethomason/tinyxml2.git
（2） 进入相应目录并编译
cd tinyxml2/
cmake .
make
（3） 测试该版本的准确性
./xmltest
没有 fail 则说明正常。
（4） 安装
sudo make install
可以看到安装的路径
注意： 也可以直接在工程引入 tinyxml2.h 和 tinyxml2.cpp 即可
