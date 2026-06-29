program:
	g++ main.cc src/dado.cc -o program.exe

clean:
	rm -r out/*.txt

.PHONY clean program