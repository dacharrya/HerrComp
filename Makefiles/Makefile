sumas.x: sumas.cpp

%.x: %.cpp
	g++ $< -o $@

datos.txt:sumas.x
	./$< > $@

clear:
	rm -f a.out *.x *.txt
