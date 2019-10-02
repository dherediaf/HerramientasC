set term pdf
set output "fig.pdf"
set xlabel "dx"
set ylabel "#nsamples"
plot "datos.txt" u 1:2 w lp