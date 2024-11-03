CXX= c++
CXXFLAGS= -Wall -Wextra -Werror
NAME= PhoneBook
OBJ= main.cpp Contact.cpp PhoneBook.cpp
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