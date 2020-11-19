CC = gcc
SRCS = mylib.c
OBJS = $(SRCS:.c=.o)
EXEC = myapp
start:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS) -L. -lmymax
.c.o:
	$(CC) -o $@ -c $< 
clean:
	rm -rf $(OBJS) $(EXEC)

