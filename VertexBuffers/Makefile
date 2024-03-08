TITLE = VertexBuffers

CFLAGS = -std=c++17 -O2

LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

all: ${TITLE}.exe

${TITLE}.exe: main.cpp
	g++ $(CFLAGS) -o $(TITLE).exe main.cpp $(LDFLAGS)

.PHONY: test clean

test: $(TITLE).exe
	./$(TITLE).exe

fps: $(TITLE).exe
	VK_INSTANCE_LAYERS='VK_LAYER_MESA_overlay' ./$(TITLE).exe

clean:
	rm -f $(TITLE).exe
