#ifndef FT_STRUCT
# define FT_STRUCT

typedef struct flags
{
	int		minus_fla;
	int		plus_fla;
	int		space_fla;
	int		diese_fla;
	int		zero_fla;

	int		width;
	int		precision;

	char	specifier;

	int		len;
} f_struct;

#endif