下载 jsoncpp 源码 git clone https://github.com/open-source-parsers/jsoncpp.git

创建目录
mkdir -p build/release
进到编译目录
cd build/release
使用 cmake 进行编译
cmake -DCMAKE_BUILD_TYPE=release -DBUILD_STATIC_LIBS=ON -DBUILD_SHARED_LIBS=OFF -DCMAKE_INSTALL_INCLUDEDIR=include/jsoncpp -DARCHIVE_INSTALL_DIR=. -G "Unix Makefiles" ../..
编译和安装
make
sudo make install
unbuntu安装
sudo apt-get install libjsoncpp-dev
引用头文件 在makfile中指定链接库的地址
 -L/usr/local/lib /usr/local/lib/libjsoncpp.a
json库的头文件安装在/usr/include/jsoncpp 中,
json库 API 文档默认在/usr/share/doc/libjsoncpp-dev/jsoncpp-api-html/目录下

使用上述方法进行json的安装及测试
