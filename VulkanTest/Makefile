CFLAGS = -std=c++17 -O2

LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

VulkanTest: main.cpp
	g++ $(CFLAGS) -o VulkanTest.exe main.cpp $(LDFLAGS)

.PHONY: test clean

test: VulkanTest
	./VulkanTest.exe

clean:
	rm -f VulkanTest.exe
