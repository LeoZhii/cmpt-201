blah: blah.o
	clang blah.o -o blah # Runs third

blah.o: blah.c
	clang -c blah.c -o blah.o # Runs second

blah.c:
	echo "int main() { return 0; }" > blah.c # Runs first

some_file : other_file
	echo "This will always run, and runs second"
	touch some_file

other_file:
	echo "This will always run, and runs first"
