CXX= c++
CXXFLAGS = -Wall -Wextra -Werror 
NAME= megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf megaphone.o

fclean: clean
	rm -rf megaphone

re:  fclean all

.SECONDARY: $(OBJ_O)