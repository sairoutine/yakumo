CXX = g++ -Wall
yakumo: src/main.cpp
	$(CXX) src/main.cpp -o yakumo
clean:
	rm -f *.a *.so *.o yakumo

