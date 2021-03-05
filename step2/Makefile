PROJECT_NAME = STATIC_LIB

SRC = test.c
INC = -Iinc

LDFLAGS = -lmyutilbs -lmystring -lbit_setReset -L.src

$(PROJECT_NAME).out : $(SRC)
	gcc -c $^ -o $@ $(INC) $(LDFLAGS)

run : $(PROJECT_NAME).out
	./$^



clean:
	rm -rf *.o *.out
	make clean -C src