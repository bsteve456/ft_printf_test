gcc printf_case.c -o true_printf
./true_printf > expected
cp ../ft_printf.a .
gcc -Wall -Werror -Wextra ft_printf_case.c ft_printf.a -o my_printf
./my_printf > output
DIFF=$(diff expected output)
if [ "$DIFF" != "" ]
	then
		echo "KO"
		#exit
	else
		echo "OK"
	fi
diff -u expected output > diff_file
rm my_printf true_printf output ft_printf.a
