CFLAGS = -std=c++17 -O2

LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

HelloTriangle: main.cpp
	g++ $(CFLAGS) -o HelloTriangle.exe main.cpp $(LDFLAGS)

.PHONY: test clean

test: HelloTriangle
	./HelloTriangle.exe

fps: HelloTriangle
	VK_INSTANCE_LAYERS='VK_LAYER_MESA_overlay' ./HelloTriangle.exe

clean:
	rm -f HelloTriangle.exe
