all: fig.pdf

a.out: sumaspf.cpp
	g++ $< -o $@

datos.txt: a.out
	./$< > $@

fig.pdf: plot.gp datos.txt
	gnuplot $< 
