# Project compilation files and directories

NAME           			=	account

C_ACCOUNT		        =  	tests.cpp 		\
							Account.cpp		\

SRCSFD          =    srcs/
OBJSFD          =    objs/

OBJS_ACCOUNT     =    $(addprefix $(SRCSFD), $(C_ACCOUNT:.c=.o))
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

$(OBJSFD):
	@mkdir $@
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ directory"

$(NAME): $(OBJSFD) $(SRCS_ACCOUNT)
	@clang++ $(CFLAGS) $(OBJS_ACCOUNT) -o account
	@echo "\t[ $(GREEN)✔$(NONE) ] account executable"

$(OBJSFD)%.o: $(SRCSFD)%.c
	@clang++ $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ object"


clean:
	@echo "Cleaning project ..."
	@/bin/rm -rf $(OBJSFD)
	@echo "\t[ $(RED)✗$(NONE) ] Objects directory"

fclean: clean
	@/bin/rm -f account
	@echo "\t[ $(RED)✗$(NONE) ] account executable"

re: fclean all

.PHONY: project all clean fclean re