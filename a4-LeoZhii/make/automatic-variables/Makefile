hey : one two
	# Outputs "hey", since this is the target name
	echo $@ # Outputs "hey" since this is the target name
	echo $? # Outputs all prerequisites newer than the target
	echo $^ # Outputs all prerequisites
	echo $< # Outputs the first prerequisite
	touch hey

one:
	touch one

two:
	touch two

clean:
	rm -f hey one two
