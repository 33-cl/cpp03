NAME = prog

CXX = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = src/main.cpp src/ClapTrap.cpp
OBJ_DIR = .build
OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.cpp=.o)))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: src/%.cpp inc/ClapTrap.hpp | $(OBJ_DIR)
	$(CXX) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
