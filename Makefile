
CC = g++
CFLAGS = -g
CXXFLAGS = -g

BIN_DIR = bin
SRC_DIR = src
OBJ_DIR = obj

PROGS = ${BIN_DIR}/dir_test.out

all : ${PROGS}

${BIN_DIR}/dir_test.out : ${SRC_DIR}/dir_test.c
	mkdir -p ${BIN_DIR} ${OBJ_DIR}
	${CC} ${CFLAGS} ${SRC_DIR}/dir_test.c -o ${BIN_DIR}/dir_test.out


.PHONY : all clean

clean:
	-rm -rf ${PROGS}
#	-rm -rf	${OBJ_DIR}/*  ${PROGS}

