set term pdf
set output 'plot.pdf'
set xlabel "x"
set ylabel "y"
plot "datos.txt" u 1:3 w l title "tanu(x)", "datos.txt" u 1:2 w l title "tan(x)"