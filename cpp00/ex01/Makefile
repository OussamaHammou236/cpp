CXX= c++
CXXFLAGS= -Wall -Wextra -Werror
NAME= PhoneBook
OBJ= main.cpp getrs_and_setrs.cpp
OBJ_O= ${OBJ:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ_O)
	$(CXX) $(CXXFLAGS) $(OBJ_O) -o $(NAME)

clean:
	rm -rf $(OBJ_O)

fclean: clean
	rm -rf $(NAME)

re:  fclean all

.SECONDARY: $(OBJ_O)