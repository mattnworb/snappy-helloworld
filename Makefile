hello: main.cc
	g++ main.cc -o hello -lsnappy

clean:
	rm hello