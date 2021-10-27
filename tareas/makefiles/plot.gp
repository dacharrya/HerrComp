set xlabel 'N term'; set ylabel 'Diff %'
set term pdf; set out "fig.pdf"
plot 'datos.txt'u 1:5 w l t 'S1-S3'
plot 'datos.txt'u 1:6 w l t 'S2-S3'

