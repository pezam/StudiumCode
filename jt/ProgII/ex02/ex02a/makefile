CC      = gcc
CFLAGS  = -lm -[<0;100;48Mstd=c11
#LDFLAGS = -g -lm -lpthread `gtk-config --cflags` `gtk-config --libs` -lgthread

OBJ = ex02

prog: $(OBJ)
	$(CC) $(CFLAGS) -o $(OBJ) $(OBJ).c

#%.o: %.c
#	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)
