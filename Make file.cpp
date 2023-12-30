SOURCES=main.cpp
OUT=main.out
makeall=build run clean

all: $(makeall)

build:
	g++ $(SOURCES) -o $(OUT)
run:
	./$(OUT)
clean:
	rm -rf $(OUT)
