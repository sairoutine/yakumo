CXX = g++ -Wall
SRC_DIR = ./src
SOURCES = $(shell ls $(SRC_DIR)/*.cpp)

yakumo: $(SOURCES)
	$(CXX) $^ -o yakumo
clean:
	rm -f *.a *.so *.o yakumo

