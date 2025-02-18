all: prog.e

prog.e: main.o util.o ImgSegmentation/kmeans.o ImageData/PgmData.o
	gcc -o prog.e main.o util.o ImgSegmentation/kmeans.o ImageData/PgmData.o

main.o: main.c LibProjeto.h
	gcc -o main.o -c main.c

util.o: util.c LibProjeto.h
	gcc -o util.o -c util.c

ImgSegmentation/kmeans.o: ImgSegmentation/kmeans.c LibProjeto.h
	gcc -o ImgSegmentation/kmeans.o -c ImgSegmentation/kmeans.c

ImageData/PgmData.o: ImageData/PgmData.c LibProjeto.h
	gcc -o ImageData/PgmData.o -c ImageData/PgmData.c

clean:
	rm -f *.o prog.e ImgSegmentation/*.o ImageData/*.o