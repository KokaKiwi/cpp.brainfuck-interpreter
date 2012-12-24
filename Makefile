
CPP := g++

CPPFLAGS := -Iinclude -g

SRCS := $(wildcard src/*.cpp)
OBJS := $(SRCS:.cpp=.o)

NAME = brainfuck

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) -o $@ $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
