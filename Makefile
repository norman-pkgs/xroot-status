CC=cc
MKDIR=mkdir
RM=rm

build: prepare
	$(CC) -c src/main.c -o build/main.o
	$(CC) -o bin/xrootd build/*.o

prepare:
	$(MKDIR) -p bin build

test: build
	./bin/main

install: build
	sudo cp bin/xrootd /bin/

uninstall:
	sudo rm /bin/xrootd

clean:
	$(RM) bin build -rf
