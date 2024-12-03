# Compiler
CXX = g++
CXXFLAGS = -Wall -std=c++11 -I/opt/homebrew/include

# Linker Flags
LDFLAGS = -L/opt/homebrew/lib -lraylib

# Directories
INCLUDES_DIR = includes
SRC_DIR = src
BUILD_DIR = build

# Source and Object Files
SRCS = main.cpp $(SRC_DIR)/Window.cpp
OBJS = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

# Output Executable
TARGET = game

# Rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $^ -o $@ $(LDFLAGS)

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)/src

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean
