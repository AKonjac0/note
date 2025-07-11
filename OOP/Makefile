# 编译器设置
CXX = g++
CXXFLAGS = -std=c++17

# 目标文件和可执行文件名
TARGET = main
SOURCE_CPP = main.cpp
SOURCE_H = a.h b.h

# 编译规则
$(TARGET): $(SOURCE_CPP) $(SOURCE_H)
	$(CXX) $(CXXFLAGS) $(SOURCE_CPP) $(SOURCE_H) -o $(TARGET)

