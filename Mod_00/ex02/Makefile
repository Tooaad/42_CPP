# Project compilation files and directories

NAME           			=	phonebook

C_PHONEBOOK		        =  	main.cpp 		\
							PhoneBook.cpp	\
							Contact.cpp		\

SRCSFD          =    srcs/
OBJSFD          =    objs/
HDR_INC         =    -I./includes

OBJS_PHONEBOOK     =    $(addprefix $(SRCSFD), $(C_PHONEBOOK:.c=.o))
# # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# Compilation
CFLAGS			=    -Wall -Wextra -Werror -I./includes #-fsanitize=address # FOR LEAKS
# # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# Colors
RED             = \033[0;31m
GREEN           = \033[0;32m
NONE            = \033[0m
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # 

all: project $(NAME)
	@echo "... project ready"

project:
	@echo "Checking project ..."

projectb:
	@echo "Checking project bonus ..."

$(OBJSFD):
	@mkdir $@
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ directory"

$(NAME): $(OBJSFD) $(SRCS_PHONEBOOK)
	@clang++ $(CFLAGS) $(OBJS_PHONEBOOK) -o phonebook
	@echo "\t[ $(GREEN)✔$(NONE) ] phonebook executable"

$(OBJSFD)%.o: $(SRCSFD)%.c
	@clang++ $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ object"

bonus: projectb $(NAME)
	@echo "... bonus project ready"

clean:
	@echo "Cleaning project ..."
	@/bin/rm -rf $(OBJSFD)
	@echo "\t[ $(RED)✗$(NONE) ] Objects directory"

fclean: clean
	@/bin/rm -f philo
	@echo "\t[ $(RED)✗$(NONE) ] philo executable"

re: fclean all

.PHONY: project all clean fclean re