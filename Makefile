SRCS_CLIENT			= srcs/client.c srcs/ft_atoi.c srcs/ft_itoa.c srcs/ft_power.c srcs/ft_strncmp.c srcs/shutdown.c srcs/send_message.c srcs/get_pid.c

SRCS_SERVER			= srcs/server.c srcs/get_message.c srcs/ft_power.c srcs/ft_putstr_fd.c srcs/ft_str_addchar.c srcs/shutdown.c srcs/ft_putnbr_fd.c

OBJS_CLIENT			= $(SRCS_CLIENT:.c=.o)
OBJS_SERVER			= $(SRCS_SERVER:.c=.o)

NAME			= minitalk
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.c	minitalk.h
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		client server

client:			$(OBJS_CLIENT) srcs/minitalk.h
				$(CC) $(CFLAGS) -Isrcs/minitalk.h -o client $(OBJS_CLIENT)

server:			$(OBJS_SERVER) srcs/minitalk.h
				$(CC) $(CFLAGS) -Isrcs/minitalk.h -o server $(OBJS_SERVER)

clean:			
				$(RM) $(OBJS_CLIENT)
				$(RM) $(OBJS_SERVER)

fclean:			clean
				$(RM) client
				$(RM) server

re:			fclean all

.PHONY:		re fclean clean all bonus
