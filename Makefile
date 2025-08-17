CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
SRC_DIR = functions
BUILD_DIR = build

SRCS = main.cpp \
	$(SRC_DIR)/ascii_show.cpp \
	$(SRC_DIR)/get_cpu_info.cpp \
	$(SRC_DIR)/get_gpu_info.cpp \
	$(SRC_DIR)/get_kernel.cpp \
	$(SRC_DIR)/get_memory_info.cpp \
	$(SRC_DIR)/get_os_info.cpp \
	$(SRC_DIR)/get_shell.cpp \
	$(SRC_DIR)/get_up_time.cpp \
	$(SRC_DIR)/get_user.cpp

OBJS = $(SRCS:.cpp=.o)
BUILD_OBJS = $(addprefix $(BUILD_DIR)/, $(notdir $(OBJS)))
TARGET = $(BUILD_DIR)/betterfetch

all: $(BUILD_DIR) $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): $(BUILD_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(BUILD_OBJS)

$(BUILD_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean

install: all
	install -d $(DESTDIR)/usr/local/bin
	install $(TARGET) $(DESTDIR)/usr/local/bin/betterfetch

.PHONY: all clean install