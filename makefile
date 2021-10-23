
all: Worker.o Worker.so testGrpc testGrpc2

Worker.o:
	g++ -c -fpic Worker.cpp

Worker.so:
	g++ -shared Worker.o -o Worker.so

testGrpc:
	g++ main.cpp Worker.cpp -lgrpc++ -o testGrpc

testGrpc2:
	g++ main.cpp Worker.so -lgrpc++ -o testGrpc2

clean:
	rm -f Worker.o Worker.so testGrpc testGrpc2
