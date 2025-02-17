all: prog.e

prog.exe: main.o util.o kmeans.o PgmData.o
	gcc -o prog.e main.o util.o kmeans.o PgmData.o

main.o: main.c LibProjeto.h
	gcc -o main.o -c main.c

util.o: util.c LibProjeto.h
	gcc -o util.o -c util.c

kmeans.o: ImageData/kmeans.c LibProjeto.h
	gcc -o kmeans.o -c kmeans.c

PgmData.o: ImgSegmentation/PgmData.c LibProjeto.h
	gcc -o PgmData.o -c PgmData.c

clean:
	rm -f *.o prog.e