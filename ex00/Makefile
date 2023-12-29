NAME	= a.out
CXX	= c++ -std=c++98
CFLAGS	= -Wall -Wextra -Werror

OUTDIR	= out/
SRCS	= main.cpp
OBJS	= $(SRCS:%.cpp=$(OUTDIR)%.o)

all : $(NAME)

$(OUTDIR):
	mkdir $@

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $@

clean :
		$(RM) -r $(OUTDIR)

fclean : clean
		$(RM) -r $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

$(OBJS): $(OUTDIR)%.o: %.cpp | $(OUTDIR)
	$(CXX) $(CFLAGS) -c $< -o $@

.PHONY : all bonus clean fclean re