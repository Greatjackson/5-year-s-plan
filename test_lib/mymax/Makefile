
CC = gcc
SRCS = mymax.c
OBJS = $(SRCS:.c=.o)
EXEC = libmymax.so #这里要注意生成的库文件开头必须lib开头，后缀.so
build:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS) -shared  #这表明是一个动态库
.c.o:
	$(CC) -o $@ -c $< -fPIC #表示编译函数时没有偏移地址
clean:
	rm -rf $(OBJS) *.so
