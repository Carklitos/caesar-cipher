CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
TARGET   = cipher
SRC      = core.cc main.cc
HDR      = core.h

all: $(TARGET)

$(TARGET): $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

.PHONY: all clean
